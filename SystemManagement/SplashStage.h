#pragma once
#include "Stage.h"
class SplashStage :
	public Stage
{
public:
	SplashStage(string name) : Stage(name) {};
	void drawStage();
};

