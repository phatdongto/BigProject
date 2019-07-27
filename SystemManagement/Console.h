#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <list>
using namespace std;


#define CONSOLE_WIDTH 60
#define CONSOLE_HEIGHT 40

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_ESC 27

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

