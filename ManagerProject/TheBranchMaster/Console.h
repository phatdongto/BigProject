#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <list>
#include "keys.h"
using namespace std;


#define CONSOLE_WIDTH 90
#define CONSOLE_HEIGHT 60

#define COLOR_BLUE 9
#define COLOR_RED 12
#define	COLOR_WHITE 7
#define COLOR_GRAY 8
#define COLOR_GREEN 10
#define COLOR_YELLOW 14

class Console{
public:
	static void setConsoleSize(int width, int height);
	static void setTextColor(int color);
	static void printxy(string str, int x, int y);
};

