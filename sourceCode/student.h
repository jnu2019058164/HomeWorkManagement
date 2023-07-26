#pragma once
#include<iostream>
using namespace std;
class student
{
public:
	student(string sc, string n, char sx, int a, string cls, string mj);
	student();
	~student();
	void info();
	string getSco();
	string getName();
	char getSex();
	int getAge();
	string getClass();
	string getMajor();
	void setSco(string e);
	void setName(string e);
	void setSex(char e);
	void setAge(int e);
	void setClass(string e);
	void setMajor(string e);
private:
	string sco;
	string name;
	char sex;
	int age;
	string clss;
	string major;
};