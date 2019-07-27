#pragma once
#include "MenuStage.h"
class MainMenu :
	public MenuStage{
public:
	MainMenu(string name, string menu);
	int input(int key);
};

