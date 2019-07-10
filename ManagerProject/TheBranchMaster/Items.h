#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<vector>
#include"Date.h"





class BaseItem {
private:
	string m_ID;
	string m_name;
	string m_company;
	string m_origin;
	long long m_price;
public:
	string ID() { return m_ID; }
	string Name() { return m_name; }
	
	string Company() { return m_company; }
	string Origin() { return m_origin; }
	long long Price() { return m_price; }
	void setID(string value) { m_ID = value; }
	void setName(string value) { m_name = value; }
	
	void setCompany(string value) { m_company = value; }
	void setOrigin(string value) { m_origin = value; }
	void setPrice(long long value) { m_price = value; }
public:
	BaseItem() {
		m_ID = "00000000";
		m_name = "Constructor_Activated";
		m_company = "4 chang ngoc";
		m_origin = "master";
		m_price = 1000;
	}
	BaseItem(string id, string name, string company, string origin,long long price) {
		m_ID = id;
		m_name = name;
		m_company = company;
		m_origin = origin;
		m_price = price;
	}
	BaseItem(const BaseItem& p) {
		m_ID = p.m_ID;
		m_name = p.m_name;
		m_company = p.m_company;
		m_origin = p.m_origin;
		m_price = p.m_price;
	}
	BaseItem& operator = (const BaseItem& p) {
		m_ID = p.m_ID;
		m_name = p.m_name;
		m_company = p.m_company;
		m_origin = p.m_origin;
		m_price = p.m_price;
		return *this;
	}
	
public:
	void EnterInfor();
	void ShowInfor();
};

class StorageItem : public BaseItem{  //thong tin vat pham luu tru
	int	m_quantity;
public:
	int Quantity() { return m_quantity; }
	void setQuantity(int value) { m_quantity = value; }
public:
	StorageItem() {
		m_quantity = 0;
	}
	StorageItem(int quantity) {
		m_quantity = quantity;
	}
public:
	void EnterInfor() {
		BaseItem::EnterInfor();
		cout << "Quantity: "; cin >> m_quantity;
	}
	void ShowInfor() {
		BaseItem::ShowInfor();
		cout << "Quantity: " << m_quantity;
	}
};

class SellItem : public BaseItem{  //thong tin vat pham trong don hang
	int	m_quantity;
public:
	int Quantity() { return m_quantity; }
	void setQuantity(int value) { m_quantity = value; }
public:
	SellItem() {
		m_quantity = 0;
	}
	SellItem(int quantity) {
		m_quantity = quantity;
	}
public:
	void EnterInfor() {
		BaseItem::EnterInfor();
		cout << "Quantity: "; cin >> m_quantity;
	}
	void ShowInfor() {
		BaseItem::ShowInfor();
		cout << "Quantity: " << m_quantity;
	}
};


