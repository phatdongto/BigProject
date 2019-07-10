#pragma once
#include<iostream>
#include"Token.h"
#include<sstream>
using namespace std;


class date {
private:
	int m_day;
	int m_month;
	int m_year;
public:
	int Day() { return m_day; }
	int Month() { return m_month; }
	int Year() { return m_year; }
	void setDay(int value) { m_day = value; }
	void setMonth(int value) { m_month = value; }
	void setYear(int value) { m_year = value; }

public:
	date() {
		m_day = 1;
		m_month = 1;
		m_year = 1;
	}
	date(int a, int b, int c) {
		m_day = a;
		m_month = b;
		m_year = c;
	}
	date(const date&p) {
		m_day = p.m_day;
		m_month = p.m_month;
		m_year = p.m_year;
	}
public:
	void SetDate() {
		cout << "Day: "; cin >> m_day;
		cout << "Month: "; cin >> m_month;
		cout << "Year: "; cin >> m_year;
	}
public:
	string DToString();
	/*date Parse(string s);*/
};


//date date::Parse(string s) {
//	vector<string> v = Tokenizer::Parse(s, "/");
//
//	int p1 = stoi(v[0]);
//
//	int p2 = stoi(v[1]);
//
//	int p3 = stoi(v[2]);
//
//	date ans(p1, p2, p3);
//	return ans;
//}

