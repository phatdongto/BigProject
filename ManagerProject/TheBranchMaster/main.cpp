#include"Items.h"
#include"Order.h"
#include"VectorInteract.h"
#include "addProducts.h"

int main() {
	ManageVector M;
	vector<StorageItem> VBItems;
	vector<BaseOrder> VBOrders;

	M.ImportItemsToVectorA(VBItems);
	//M.ImportOrderToVectorB(VBOrders);

	VBItems[0].ShowInfor();
	cout << endl;
	VBItems[1].ShowInfor();
	cout << endl;

	/*
	VBOrders[0].ShowInfor(); 
	cout << endl<<endl<<endl;
	VBOrders[1].ShowInfor();*/
	addProducts a;
	a.informationStorage(VBItems); // 1
	a.dataStorage(VBItems);
	a.removeStorage(VBItems, M);
	//a.changeStorage(VBItems);
	//a.dataStorage(VBItems);
	/*date d;
	d.now();
	a.updateDate(d);*/
	system("pause");
	return 0;
}