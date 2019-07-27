#pragma once
#include"Order.h"
#include"Items.h"

#include<vector>
#include<fstream>



class ManageVector
{
public:
	static bool ImportItemsToVectorA(vector<StorageItem>& VBItems); //VBItems
	static bool ImportOrderToVectorB(vector<BaseOrder>& VBOders); //VOrder
	static bool ExportItemsToTXT(vector<StorageItem>& VBItems);
	static bool ExportOrdersToTXT(vector<BaseOrder>& VBOders);
	static string ToString(StorageItem c);
	static bool ExportChoosenItem(string path, vector<SellItem> Choose);
};