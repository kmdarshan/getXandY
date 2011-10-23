// getXandY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	POINT pt;
	
	while(1)
	{
		GetCursorPos(&pt);
		int x= pt.x;
		int y= pt.y;
		wcout<<"X="<<x<<" Y="<<y<<endl;
		Sleep(100);
	}
	return 0;
}

