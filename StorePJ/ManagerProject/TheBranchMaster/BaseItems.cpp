#include"Items.h"

void BaseItem::EnterInfor() {
	cout << "ID: "; cin >> m_ID;
	cin.ignore();
	cout << "name: "; getline(cin, m_name);
	cout << "Company: "; getline(cin, m_company);
	cout << "Country: "; getline(cin, m_origin);
}

void BaseItem::ShowInfor() {
	cout << "ID: " << m_ID << endl;
	cout << "name: " << m_name << endl;
	cout << "Company: " << m_company << endl;
	cout << "Country: " << m_origin << endl;
}