#pragma once
#include <map>
#include "Console.h"
#include <conio.h>
#include <iostream>
#include "Stage.h"
#include <vector>
using namespace std;

class Stage
{
private:
public:
	Stage() {};
	Stage(string name);
	virtual void drawStage() { };
	virtual void reset() { system("cls"); };
	virtual int input(int key) { return 0; };
};

class StageManager
{
public:
	static Stage* currentStage;
	static map<string, Stage*> stageList;
	static void changeStage(string name);
	static void drawStage();
	static int update();
	static int getInput();
};


