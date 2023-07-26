#include"insert.h"
#include"cource_design.h"
#include"student.h"
#include"infomation.h"
insert::insert()
{
}

insert::~insert()
{
}

int c_searching(string inf) {//用于查找课程设计中的参与人员信息
	int found = 0; int num = -1;
	for (unsigned int i = 0; i < infomation::stu.size(); i++) {
		if (inf == infomation::stu[i].getName()) {
			found++;
			num = i;
			break;
		}
	}
	if (found > 0)
		return num;
	else
		return -1;
}

void insert::print()
{
	int choice = 0;
	cout << "请选择需要插入的信息种类：1.学生信息 2.课程设计信息： ";
	cin >> choice;
	if (choice == 1) {					//如果输入为1则插入学生信息
		int i = 0;
		string inf1; int inf2; char inf3;
		student tmp;
		cout << "请输入学生的：" << endl;
		cout << "学号（必须唯一)： ";
		cin >> inf1;
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {
			if (infomation::stu[i].getName() == inf1) {
				cout << "输入了重复的学号信息，退出输入。" << endl;
				return;
			}
		}
		tmp.setSco(inf1);
		cout << "姓名：";
		cin >> inf1;
		tmp.setName(inf1);
		cout << "性别(f/m)：";
		cin >> inf3;
		tmp.setSex(inf3);
		cout << "年龄：";
		cin >> inf2;
		tmp.setAge(inf2);
		cout << "班级：";
		cin >> inf1;
		tmp.setClass(inf1);
		cout << "专业：";
		cin >> inf1;
		tmp.setMajor(inf1);
		infomation::stuInsert(tmp);
	}
	else if (choice == 2) {						//如果输入为2则插入课程设计信息
		int i = 0; int j = 0;
		string inf1;
		int inf2 = 0;
		course_design tmp;
		cout << "请输入课程设计的：" << endl;
		cout << "编号：";
		cin >> inf2;
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {
			if (infomation::cd[i].getDnum() == inf2) {
				cout << "输入了重复的编号，退出数据插入。" << endl;
				return;
			}
		}
		tmp.setDnum(inf2);
		cout << "名字：";
		cin >> inf1;
		tmp.setName(inf1);
		cout << "关键词：";
		cin >> inf1;
		tmp.setKeyword(inf1);
		cout << "实现技术：";
		cin >> inf1;
		tmp.setRealize_tech(inf1);
		cout << "成员1名字：(没有可以输入‘无’)";
		cin >> inf1;
		if (inf1 != "无") {						//这部分能查找相应学生信息以防止插入错误
			int n = c_searching(inf1);
			if (n != -1) {
				tmp.setmember1(inf1);
			}
			else {
				cout << "找不到该学生信息，将视作没有成员1。" << endl;
			}
		}
		else {
			tmp.setmember1(inf1);
			infomation::cdInsert(tmp);
			return;
		}

		cout << "成员2名字：(没有可以输入‘无’)";
		cin >> inf1;
		if (inf1 != "无") {
			int n = c_searching(inf1);
			if (n != -1) {
				tmp.setmember2(inf1);
			}
			else {
				cout << "找不到该学生信息，将视作没有成员2。" << endl;
			}
		}
		else {
			infomation::cdInsert(tmp);
			return;
		}

		cout << "成员3名字：(没有可以输入‘无’)";
		cin >> inf1;
		if (inf1 != "无") {
			int n = c_searching(inf1);
			if (n != -1) {
				tmp.setmember3(inf1);
			}
			else {
				cout << "找不到该学生信息，将视作没有成员3。" << endl;
			}
		}
		else {
			infomation::cdInsert(tmp);
			return;
		}
		infomation::cdInsert(tmp);
	}
}
