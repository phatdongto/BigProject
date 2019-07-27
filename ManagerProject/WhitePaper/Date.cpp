

#include"Date.h"
//
//date date::Parse(string s)
//{
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
date date::now()
{
	date ans;
	time_t now = time(&now);
	tm *current = localtime(&now);
	ans.m_day = current->tm_mday;
	ans.m_month = current->tm_mon;
	ans.m_year = current->tm_year;
	ans = *this;
	return ans;
}


//Date::Date()
//{
//}
//
//
//Date::~Date()
//{
//}
