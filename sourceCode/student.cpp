#include"student.h"

string student::getSco() {
	return sco;
}
string student::getName() {
	return name;
}

string student::getClass() {
	return clss;
}

int student::getAge() {
	return age;
}

char student::getSex() {
	return sex;
}

string student::getMajor() {
	return major;
}

void student::setSco(string e)
{
	sco = e;
}

void student::setName(string e)
{
	name = e;
}

void student::setSex(char e)
{
	sex = e;
}

void student::setAge(int e)
{
	age = e;
}

void student::setClass(string e)
{
	clss = e;
}

void student::setMajor(string e)
{
	major = e;
}

void student::info() {
	cout << "ѧ�ţ�" << sco << endl;
	cout << "������" << name << endl;
	cout << "�Ա�" << sex << endl;
	cout << "���䣺" << age << endl;
	cout << "�༶��" << clss << endl;
	cout << "רҵ��" << major << endl;
}

student::student(string sc, string n, char sx, int a, string cls, string mj)
{
	sco = sc;
	name = n;
	sex = sx;
	age = a;
	clss = cls;
	major = mj;
}

student::student()
{
	sco = "none";
	name = "none";
	sex = 'n';
	age = 0;
	clss = "none";
	major = "none";
}

student::~student()
{
	string scot;
	string namet;
	string clsst;
	string mjt;
	sco.swap(scot);
	name.swap(namet);
	clss.swap(clsst);
	major.swap(mjt);
}