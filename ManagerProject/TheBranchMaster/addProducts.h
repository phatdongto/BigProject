#pragma once
#include <fstream>
#include "Items.h"
#include "Date.h"
#include "VectorInteract.h"


class addProducts // Master //danh tu
{

public:
	void informationStorage(vector<StorageItem> &VBItems);//add 
	void updateDate(date d);
	void dataStorage(vector<StorageItem> &VBItems);
	void removeStorage(vector<StorageItem> &VBItems, ManageVector); // dong tu
	void changeStorage(vector<StorageItem> &VBItems, string ID);
	StorageItem searchStorageID(vector<StorageItem> VBItems, string ID);
	StorageItem searchStorageMoney(vector<StorageItem> VBItems, long long money);
};

