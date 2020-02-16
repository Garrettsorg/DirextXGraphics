
#include <Windows.h>
#include <iostream>

int CALLBACK WinMain(HINSTANCE hInstacnce, HINSTANCE hPrevInstance,
	LPSTR CmdLine, int nCmdShow)
{

	MessageBoxEx(NULL, L"Hello world", L"Hello world", NULL, NULL);

	return 0;
}