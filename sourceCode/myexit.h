#pragma once
#include "myshell.h"

class myexit :public myshell{
private:
	string info;
public:
	string getinfo() { return info; }
	myexit() { setEnd(true); info = "system exit."; }
	void print();
}; 
