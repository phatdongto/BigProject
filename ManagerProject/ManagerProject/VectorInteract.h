#pragma once
#include"Order.h"
#include"Items.h"

#include<vector>
#include<fstream>



class ManageVector 
{

public:
static bool ImportItemsToVectorA(vector<StorageItem>& VBItems); //VBItems
	bool ImportOrderToVectorB(vector<BaseOrder>& VBOders); //VOrder
	static bool ExportItemsToTXT(vector<StorageItem>& VBItems);
	static string ToString(StorageItem c);
};