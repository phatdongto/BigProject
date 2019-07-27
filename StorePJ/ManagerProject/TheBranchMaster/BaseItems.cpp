#include"Items.h"
#include "Console.h"

void BaseItem::EnterInfor() {
	cout << "ID: "; cin >> m_ID;
	cin.ignore();
	cout << "name: "; getline(cin, m_name);
	cout << "Company: "; getline(cin, m_company);
	cout << "Country: "; getline(cin, m_origin);
}

void BaseItem::ShowInfor(uint8_t x, uint8_t y) {
	Console::printxy("ID: " + m_ID, x, y);
	Console::printxy("Name: " + m_name, x, y+1);
	Console::printxy("Company: " + m_company, x, y+2);
	Console::printxy("Country: " + m_origin, x, y+3);
	Console::printxy("Price: " + to_string(m_price), x, y+4);
}