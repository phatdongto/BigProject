#pragma once
#include<iostream>
using namespace std;
#include<vector>

class Tokenizer {
public:
	static vector<string> Parse(string Triangle, string seperator) {
		vector<string> tokens;
		int startPos = 0;
		size_t foundPos = Triangle.find(seperator, startPos);

		while (foundPos != string::npos) {
			int count = foundPos - startPos;
			string token = Triangle.substr(startPos, count);
			tokens.push_back(token);

			startPos = foundPos + seperator.length();

			foundPos = Triangle.find(seperator, startPos);
		}
		int count = Triangle.length() - startPos;
		string token = Triangle.substr(startPos, count);
		tokens.push_back(token);

		return tokens;
	}
};