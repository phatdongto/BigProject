#include "Console.h"
void Console::setConsoleSize(int width, int height) 
{
	string cmd = "MODE CON COLS=" + to_string(width) + "LINES=" + to_string(height);
	system(cmd.c_str());
}

void Console::setTextColor(int color) 
{
	static HANDLE handle = NULL;
	if (!handle) handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, color);
}

void Console::printxy(string str, int x, int y) 
{
	static HANDLE handle = NULL;
	if (!handle) handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { (short)x, (short)y };
	SetConsoleCursorPosition(handle, c);
	cout << str;
}
