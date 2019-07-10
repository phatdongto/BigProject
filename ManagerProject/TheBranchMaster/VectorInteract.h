#pragma once
#include"Order.h"
#include"Items.h"
#include<vector>
#include<fstream>



class ManageVector {
public:
	bool ImportItemsToVectorA(vector<StorageItem>& VBItems); //VBItems
	bool ImportOrderToVectorB(vector<BaseOrder>& VBOders); //VOrder
};