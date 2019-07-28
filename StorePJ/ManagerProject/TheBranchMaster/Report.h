#pragma once
#include <iostream>
#include "Items.h"
using namespace std;

class Report
{
public:
	void ReportStockLevel(vector <StorageItem> VBItems, uint8_t x, uint8_t y);
	void ReportGoodsSold(vector <SellItem> );
};

