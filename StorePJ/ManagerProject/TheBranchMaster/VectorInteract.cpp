#include"VectorInteract.h"
#include"Token.h"
#include"Items.h"
#include"Order.h"

bool ManageVector::ImportItemsToVectorA(vector<StorageItem>& VBItems) {
	fstream FileIn;
	StorageItem add;

	FileIn.open("Storage//ItemStorage.txt", ios::in);
	if (!FileIn.is_open()) {
		return false;
	}
	string tmp;

	while (!FileIn.eof()) {  //Parse and import to Vector
		if (!FileIn.eof())
		getline(FileIn, tmp, '\n');

		vector<string> hold = Tokenizer::Parse(tmp, ", ");
		add.setID(hold[0]);  //0ID  1Name  2Quantity  3Company  4Origin  5Price
		add.setName(hold[1]);
		add.setQuantity(stoi(hold[2]));
		add.setCompany(hold[3]);
		add.setOrigin(hold[4]);
		add.setPrice(stoi(hold[5]));
		VBItems.push_back(add);
	}
	FileIn.close();

	return true;
}

//----------------------------------------------------------------------------------------

vector<SellItem> GetItemForOrder(string Path) {
	fstream FileIn;
	FileIn.open("OrderMaterial//ItemChoosen//No. " + Path + ".txt", ios::in);
	if (!FileIn.is_open()) {
		cout << "cant open file Item choosen";
		system("pause");
	}

	vector<SellItem> VSellItem;
	SellItem add;
	string tmp;


	while (!FileIn.eof()) {  //Parse and import to Vector
		if (!FileIn.eof())

			getline(FileIn, tmp, '\n');
		vector<string> hold = Tokenizer::Parse(tmp, ", ");
		add.setID(hold[0]);  //0ID  1Name   2Company  3Origin  4Price 5quantity
		add.setName(hold[1]);
		add.setCompany(hold[2]);
		add.setOrigin(hold[3]);
		add.setPrice(stoi(hold[4]));
		add.setQuantity(stoi(hold[5]));
		VSellItem.push_back(add);
	}
	FileIn.close();

	return VSellItem;
}

//-----------------------------------------------------------------------------

bool ManageVector::ImportOrderToVectorB(vector<BaseOrder>& VBOrders)
{
	fstream FileIn;
	FileIn.open("OrderMaterial//OrderList.txt", ios::in);
	if (!FileIn.is_open())
		return false;

	string tmp;
	BaseOrder add;


	while (!FileIn.eof())
	{
		if (!FileIn.eof())

			getline(FileIn, tmp, '\n');
		vector<string> hold = Tokenizer::Parse(tmp, ", ");
		add.setOrderID(hold[0]);
		add.setCustomerName(hold[1]);
		vector<string> sepe = Tokenizer::Parse(hold[2], "/");
		add.BookDay().setDay(stoi(sepe[0]));
		add.BookDay().setMonth(stoi(sepe[1]));
		add.BookDay().setYear(stoi(sepe[2]));
		add.setVector(GetItemForOrder(add.OrderID()));

		VBOrders.push_back(add);
	}

	FileIn.close();

	return true;
}

bool ManageVector::ExportItemsToTXT(vector<StorageItem>& VBItems)
{
	ofstream file;

	file.open("Storage//ItemStorage.txt");
	if (!file.is_open()) {
		return false;
	}
	for (int i = 0; i < VBItems.size(); i++) {
		file << VBItems[i].ID() << ", ";  
		file << VBItems[i].Name() << ", ";
		file << VBItems[i].Quantity() << ", ";
		file << VBItems[i].Company() << ", ";
		file << VBItems[i].Origin() << ", ";
		file << VBItems[i].Price() ;
		if(i!=VBItems.size()-1)
		file << "\n";
	}
	file.close();

	return true;
}

bool ManageVector::ExportOrdersToTXT(vector<BaseOrder>& VBOders)
{
	ofstream Listout;
	Listout.open("OrderMaterial//ItemChoosen.txt");
	if (!Listout.is_open()) {
		return false;
	}
	for (int i = 0; i < VBOders.size(); i++) {
		Listout << VBOders[i].OrderID() << ", ";
		Listout << VBOders[i].CustomerName() << ", ";
		Listout << VBOders[i].BookDay().DToString();
		if (i != VBOders.size() - 1)
			Listout << endl;
		ExportChoosenItem(VBOders[i].OrderID(), VBOders[i].Vector());
	}

	Listout.close();
	return true;
}

//while (!FileIn.eof()) {
//	/*if(!FileIn.eof())*/
//	
//	getline(FileIn, tmp, ',');
//	add.setID(tmp);
//
//	getline(FileIn, tmp, ',');
//	add.setName(tmp);
//
//	getline(FileIn, tmp, ',');
//	add.setQuantity(stoi(tmp));
//
//	getline(FileIn, tmp, ',');
//	add.setCompany(tmp);
//
//	getline(FileIn, tmp, ',');
//	add.setOrigin(tmp);
//
//	getline(FileIn, tmp, '\n');
//	add.setPrice(stoi(tmp));
//
//	VBItems.push_back(add);
//}
//----------------------------------
string ManageVector::ToString(StorageItem c)
{

	stringstream writer;
	writer << c.ID() << ", " << c.Name() << ", " << c.Company() << ", " << c.Origin() << ", " << c.Price() << ", " << c.Quantity();
	return writer.str();

}

bool ManageVector::ExportChoosenItem(string path, vector<SellItem> choose)
{ 
	ofstream Itemout;
	Itemout.open("OrderMaterial//ItemChoosen//No. "+path+".txt");
	if (!Itemout.eof()) return false;

	for (int i = 0; i < choose.size(); i++) {
		Itemout << choose[i].ID() << ", ";
		Itemout << choose[i].Name() << ", ";
		Itemout << choose[i].Company() << ", ";
		Itemout << choose[i].Origin() << ", ";
		Itemout << choose[i].Quantity();
		if (i != choose.size() - 1);
		Itemout << endl;
	}
	Itemout.close();
	return true;
}


