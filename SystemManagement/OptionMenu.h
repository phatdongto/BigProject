#pragma once
#include "MenuStage.h"
class OptionMenu :
	public MenuStage{
public:
	OptionMenu(string name, string menu);
	int input(int key);
};

