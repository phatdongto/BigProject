#pragma once
#include "Stage.h"


class ShoppingMenu :
	public Stage
{
public:
	ShoppingMenu(string name);
	void drawStage();
	int input(int key);

	// ham load item tu file bla bla

private:
	int count = 1;
	int choice = 1;
	vector<string> list;
};

