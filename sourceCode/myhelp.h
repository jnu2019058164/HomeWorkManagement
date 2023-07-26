#pragma once
#include "myshell.h"
class myhelp :public myshell {
private:
	string info;
public:
	string getinfo() { return info; }
	myhelp();
	void print();
};