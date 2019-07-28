#include "Report.h"

void Report::ReportStockLevel(vector<StorageItem> VBItems, uint8_t x, uint8_t y)
{
	for (int i = 0; i < VBItems.size(); i++)
	{
		VBItems[i].ShowInfor(x, y);
		y += 5;
	}
}
void Report::totalGoodSold(BaseOrder order)
{
	cout << " The total of Goods sold:";
	cout << order.Vector().size();
}
void Report::mostSellingGoods(vector<SellItem>VSellingItem)// tim ra sp duoc ban nhieu nhat
{
	int count = 0;
	for (int i = 0; i < VSellingItem.size() - 1; i++)
	{
		for (int j = 0; j < VSellingItem.size(); j++)
		{
			if (VSellingItem[i].Name() == VSellingItem[j].Name()) count += 1;
		}
	}
	cout << count;
}