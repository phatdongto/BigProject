#pragma once
#include <iostream>
#include "Items.h"
#include "Order.h"
using namespace std;

class Report
{
public:
	void ReportStockLevel(vector <StorageItem> VBItems, uint8_t x, uint8_t y);
	//void ReportGoodsSold(vector <SellItem> );
	void totalGoodSold(BaseOrder order);
	void mostSellingGoods(vector<SellItem>VSellingItem);// tim ra sp duoc ban nhieu nhat
};

