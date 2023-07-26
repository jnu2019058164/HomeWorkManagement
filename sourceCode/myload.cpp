#include"myload.h"
#include"infomation.h"
#include"student.h"
#include"cource_design.h"
#include<fstream>
myload::myload()
{
}

myload::~myload()
{
}

void load_stu() {
	infomation::stu.clear();
	int num1 = 0; student *s = new student(); int i = -1;
	int stu_block = 0;
	int string_block = 0;
	string sco, name, clss, major; char sex; int age;
	char tmp[400] = {};
	ifstream r_stu = ifstream("student_info.chh", ios::in | ios::binary);
	if (!r_stu.is_open()) {
		cout << "找不到学生信息存档" << endl;
	}
	else
	{
		r_stu.read((char*)&num1, sizeof(int));//读取数据数量
		while (!r_stu.eof()) {
			memset(tmp, 0, 400);
			r_stu.read((char*)&string_block, sizeof(int));//学号
			r_stu.read((char*)tmp, string_block);
			sco = tmp;
			s->setSco(sco);

			memset(tmp, 0, 400);
			r_stu.read((char*)&string_block, sizeof(int));//姓名
			r_stu.read((char*)&tmp, string_block);
			name = tmp;
			s->setName(name);

			r_stu.read((char*)&sex, sizeof(char));//性别
			s->setSex(sex);

			r_stu.read((char*)&age, sizeof(int));//年龄
			s->setAge(age);

			memset(tmp, 0, 400);
			r_stu.read((char*)&string_block, sizeof(int));//班级
			r_stu.read((char*)&tmp, string_block);
			clss = tmp;
			s->setClass(clss);

			memset(tmp, 0, 400);
			r_stu.read((char*)&string_block, sizeof(int));//专业
			r_stu.read((char*)tmp, string_block);
			major = tmp;
			s->setMajor(major);

			if (i > -1) {
				if (s->getSco() == infomation::stu.back().getSco()) {
					continue;
				}
				if (s->getSco().empty() || s->getName().empty() || s->getClass().empty() || s->getMajor().empty())
					continue;
			}
			infomation::stu.push_back(*s);
			i++;
			if (r_stu.eof())
				break;
		}
		r_stu.close();
		cout << "已读取学生信息记录。" << endl;
	}
}

void load_cd() {
	ifstream r_cd = ifstream("course_design_info.chh", ios::in | ios::binary);
	if (!r_cd.is_open()) {
		cout << "找不到课程设计信息存档" << endl;
	}
	else {
		infomation::cd.clear();
		int num2 = 0; int cd_block = 0; int string_block = 0;
		int dnum = 0; string name, keyword, realize_tech, member1, member2, member3;
		char tmp[400] = {};
		r_cd.read((char*)&num2, sizeof(int));
		course_design* c = new course_design(); int i = -1;
		while (!r_cd.eof()) {
			if (r_cd.eof())
				break;
			/*r_cd.read((char*)&cd_block,sizeof(int));
			r_cd.read((char*)c, cd_block);*/

			r_cd.read((char*)&dnum, sizeof(int));//编号
			c->setDnum(dnum);

			memset(tmp, 0, 400);
			r_cd.read((char*)&string_block, sizeof(int));//名字
			r_cd.read((char*)tmp, string_block);
			name = tmp;
			c->setName(name);

			memset(tmp, 0, 400);
			r_cd.read((char*)&string_block, sizeof(int));//关键字
			r_cd.read((char*)tmp, string_block);
			keyword = tmp;
			c->setKeyword(keyword);

			memset(tmp, 0, 400);
			r_cd.read((char*)&string_block, sizeof(int));//实现技术
			r_cd.read((char*)tmp, string_block);
			realize_tech = tmp;
			c->setRealize_tech(realize_tech);

			memset(tmp, 0, 400);
			r_cd.read((char*)&string_block, sizeof(int));//成员1
			r_cd.read((char*)tmp, string_block);
			member1 = tmp;
			c->setmember1(member1);

			memset(tmp, 0, 400);
			r_cd.read((char*)&string_block, sizeof(int));//成员2
			r_cd.read((char*)tmp, string_block);
			member2 = tmp;
			c->setmember2(member2);

			memset(tmp, 0, 400);
			r_cd.read((char*)&string_block, sizeof(int));//成员3
			r_cd.read((char*)tmp, string_block);
			member3 = tmp;
			c->setmember3(member3);

			if (i != -1) {
				if (c->getDnum() == infomation::cd.back().getDnum())
					continue;
				if (c->getName() == "none")
					continue;
			}
			infomation::cd.push_back(*c);
			i++;
		}
		r_cd.close();
		cout << "已读取课程设计信息记录。" << endl;
	}
}

void myload::print()
{
	load_stu();
	load_cd();
}
