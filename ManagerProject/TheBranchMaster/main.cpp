#include"Items.h"
#include"Order.h"
#include"VectorInteract.h"

int main() {
	ManageVector M;
	vector<StorageItem> VBItems;
	vector<BaseOrder> VBOrders;

	/*M.ImportItemsToVectorA(VBItems);*/
	M.ImportOrderToVectorB(VBOrders);

	/*VBItems[0].ShowInfor();
	cout << endl;
	VBItems[1].ShowInfor();
	cout << endl;*/


	VBOrders[0].ShowInfor(); 
	cout << endl<<endl<<endl;
	VBOrders[1].ShowInfor();


	system("pause");
	return 0;
}