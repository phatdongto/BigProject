#include"Order.h"

void BaseOrder::ShowInfor() {
	/*string m_OrderID,
		m_customer_name;
	date m_book_day;
	vector<SellItem> m_VSellItem;*/

	cout << "ID: " << m_OrderID << endl;
	cout << "name: " << m_customer_name << endl;
	cout << "Book day: " << m_book_day.DToString();
	cout << endl;

	for (int i = 0; i < m_VSellItem.size(); i++) {
		m_VSellItem[i].ShowInfor();
		cout << endl;
	}
}

string date::DToString() {
	stringstream writer;
	writer << m_day << "/" << m_month << "/" << m_year;
	return writer.str();
}
