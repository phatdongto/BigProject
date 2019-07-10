#include"VectorInteract.h"
#include"Token.h"
#include"Items.h"
#include"Order.h"

bool ManageVector::ImportItemsToVectorA(vector<StorageItem> &VBItems) {
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
		add.setID(hold[0]);  //0ID  1Name  2Quantity  3Company  4Origin  5Price 6quantity
		add.setName(hold[1]);
		add.setQuantity(stoi(hold[2]));
		add.setCompany(hold[3]);
		add.setOrigin(hold[4]);
		add.setPrice(stoi(hold[5]));
		add.setQuantity(stoi(hold[6]));
		VSellItem.push_back(add);
	}
	FileIn.close();

	return VSellItem;
}

//-----------------------------------------------------------------------------

bool ManageVector::ImportOrderToVectorB(vector<BaseOrder> &VBOrders)
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



