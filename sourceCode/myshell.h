#pragma once
#include<string>
#include<iostream>
#define ins_num 20
using namespace std;
//shellÖ÷³ÌÐò
class myshell
{
private:
	bool end;
	string instrument[ins_num] = {};
	myshell* s[ins_num] = {nullptr};
public:
	myshell() { end = false; instrument[0] = "help"; }
	void setEnd(bool e);
	bool getEnd();
	myshell* operator[](string ins) {
		int i = 0;
		while (i < ins_num) {
			if (s[i] == nullptr) { 
				i++; 
				continue; 
			}  
			if (instrument[i] == ins) 
				break; 
			else 
				i++; 
		};
		if (i < ins_num)
			return s[i];
		else
		{
			return this;
		}
	}
	void setShell(int n, string ins, myshell& s);
	virtual void print();
};




