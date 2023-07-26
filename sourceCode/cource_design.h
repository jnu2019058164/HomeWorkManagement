#pragma once
#include"student.h"
#include<string>
using namespace std;
class course_design
{
public:
	course_design(int d, string n, string k, string rt, string m1, string m2, string m3);
	course_design();
	~course_design();
	void info();
	int getDnum();
	string getName();
	string getKeyword();
	string getRealize_tech();
	string getmember1();
	string getmember2();
	string getmember3();
	void setDnum(int e);
	void setName(string e);
	void setKeyword(string e);
	void setRealize_tech(string e);
	void setmember1(string e);
	void setmember2(string e);
	void setmember3(string e);
private:
	int dnum;
	string name;
	string keyword;
	string realize_tech;
	string member_name[3];
};