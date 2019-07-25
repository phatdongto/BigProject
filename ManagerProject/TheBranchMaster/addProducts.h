#pragma once
#include <fstream>
#include "Items.h"
#include "Date.h"
#include "VectorInteract.h"
class addProducts // Master
{

public:
	void informationStorage(vector<StorageItem> &VBItems);
	void updateDate(date d);
	void dataStorage(vector<StorageItem> &VBItems);
	void changeStorage(vector<StorageItem> &VBItems);
	

public:
	addProducts();
	~addProducts();
};

