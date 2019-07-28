#include "Report.h"

void Report::ReportStockLevel(vector<StorageItem> VBItems, uint8_t x, uint8_t y)
{
	for (int i = 0; i < VBItems.size(); i++)
	{
		VBItems[i].ShowInfor(x, y);
		y += 5;
	}
}
