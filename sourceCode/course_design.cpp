#include"cource_design.h"
void course_design::info() {
	int num = 0;
	cout << "编号：" << dnum << endl;
	cout << "名字：" << name << endl;
	cout << "关键字：" << keyword << endl;
	cout << "实现技术：" << realize_tech << endl;
	cout << "参与人员：" << endl;
	for (int i = 0; i < 3; i++) {
		if (member_name[i] != "") {
			cout << member_name[i] << endl;
		}
		else
			num++;
	}
	if (num>=3)
		cout << "该课程设计没有人参加" << endl ;
	cout << endl;
}

int course_design::getDnum()
{
	return dnum;
}

string course_design::getName()
{
	return name;
}

string course_design::getKeyword()
{
	return keyword;
}

string course_design::getRealize_tech()
{
	return realize_tech;
}

string course_design::getmember1()
{
	return member_name[0];
}

string course_design::getmember2()
{
	return member_name[1];
}

string course_design::getmember3()
{
	return member_name[2];
}

void course_design::setDnum(int e)
{
	dnum = e;
}

void course_design::setName(string e)
{
	name = e;
}

void course_design::setKeyword(string e)
{
	keyword = e;
}

void course_design::setRealize_tech(string e)
{
	realize_tech = e;
}


void course_design::setmember1(string e)
{
	member_name[0] = e;
}

void course_design::setmember2(string e)
{
	member_name[1] = e;
}

void course_design::setmember3(string e)
{
	member_name[2] = e;
}

course_design::course_design(int d, string n, string k, string rt, string m1, string m2, string m3)
{
	dnum = d;
	name = n;
	keyword = k;
	realize_tech = rt;
	member_name[0] = m1;
	member_name[1] = m2;
	member_name[2] = m3;
}

course_design::course_design()
{
	dnum = 0;
	name = "none";
	keyword = "none";
	realize_tech = "none";
	member_name[0] = "";
	member_name[1] = "";
	member_name[2] = "";
}

course_design::~course_design()
{
}