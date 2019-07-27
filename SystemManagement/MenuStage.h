#pragma once
#include "Stage.h"
class MenuStage :
	public Stage{
public:
	MenuStage(string name, string menu);
	void drawStage();
	void reset();

	string menu;
	int choice = 1;
	int count = 1;
	vector<string> list;
};

