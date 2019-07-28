#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<vector>

#include"Items.h"


class BaseOrder {
private:
	string m_OrderID,
			m_customer_name;
	date m_book_day;
	vector<SellItem> m_VSellItem;
public:
	string OrderID() { return m_OrderID; }
	string CustomerName() { return m_customer_name; }
	date BookDay() { return m_book_day; }
	vector<SellItem>& Vector() { return m_VSellItem; }
	//vector<SellItem> getVector(int index) 
	//{
	//	return m_VSellItem;// ne
	//}
	void setCustomerName(string value) { m_customer_name = value; }
	void setOrderID(string value) { m_OrderID = value; }
	void setVector(vector<SellItem> v) { m_VSellItem = v; }
public:
	BaseOrder() {
		m_OrderID = "ABCD";
		m_customer_name = "Abraham Lincoin";
		m_book_day.setDay(1);
		m_book_day.setMonth(1);
		m_book_day.setYear(2000);
		m_VSellItem.resize(1);
	}
	BaseOrder(string ID, string name, date day, vector<SellItem> Vettor) {
		m_OrderID = ID;
		m_customer_name = name;
		m_book_day = day;
		m_VSellItem = Vettor;
	}

public:
	void ShowInfor();
};