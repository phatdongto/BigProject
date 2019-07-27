#pragma once
#include "Stage.h"

class SplashStage :
	public Stage
{
public:
	SplashStage(string name);
	void drawStage();

private:
	string* splashData = new string[CONSOLE_HEIGHT];
	int lines = 0;
};

