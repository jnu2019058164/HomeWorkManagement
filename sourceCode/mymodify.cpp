#include"mymodify.h"
#include"infomation.h"
mymodify::mymodify()
{
}

mymodify::~mymodify()
{
}

int cd_searching(string inf) {		//修改课程设计参与学生时用到的查找学生函数
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

void mymodify::print()
{
	int choice = 0;
	cout << "请选择你要修改的信息:1.学生信息 2.课程设计信息：";
	cin >> choice;
	if (choice == 1) {//学生信息
		string t;
		cout << "请输入要修改的学生学号(不知道的话建议先用search指令搜索)：";
		cin >> t;
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {
			if (infomation::stu[i].getSco() == t) {
				char c;
				cout << "已找到该学生：" << endl;
				infomation::stu[i].info();
				cout << "请选择要修改的学生信息：1.学号 2.姓名 3.性别 " << endl;
				cout << "4.年龄 5.年级 6.专业,若不想修改可键入 n：";
				cin >> c;
				switch (c)
				{
				case '1': {
					string t;
					cout << "请输入修改后的学号信息：";
					cin >> t;
					infomation::stu[i].setSco(t);
					cout << "已修改该学生信息！" << endl;
					return;
					break;
				};
				case '2': {
					string t;
					cout << "请输入修改后的姓名信息：";
					cin >> t;
					infomation::stu[i].setName(t);
					cout << "已修改该学生信息！" << endl;
					return;
					break;
				};
				case '3': {
					char t;
					cout << "请输入修改后的性别信息：";
					cin >> t;
					infomation::stu[i].setSex(t);
					cout << "已修改该学生信息！" << endl;
					return;
					break;
				};
				case '4': {
					int t;
					cout << "请输入修改后的年龄信息：";
					cin >> t;
					infomation::stu[i].setAge(t);
					cout << "已修改该学生信息！" << endl;
					return;
					break;
				}
				case '5': {
					string t;
					cout << "请输入修改后的年级信息：";
					cin >> t;
					infomation::stu[i].setClass(t);
					cout << "已修改该学生信息！" << endl;
					return;
					break;
				}
				case '6': {
					string t;
					cout << "请输入修改后的专业信息：";
					cin >> t;
					infomation::stu[i].setMajor(t);
					cout << "已修改该学生信息！" << endl;
					return;
					break;
				};
				default:
					return;
					break;
				}
			}
		}
	}
	else if (choice == 2) {//修改课程设计信息
		int t;
		cout << "请输入课程设计编号(不知道的话建议先用search指令搜索)：";
		cin >> t;
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {
			if (infomation::cd[i].getDnum() == t) {
				cout << "找到该课程设计信息：" << endl;
				infomation::cd[i].info();
				char c;
				cout << "请选择要修改的课程设计信息： 1.课程设计编号、2.课程设计名字、3.实现技术、4.参加成员信息、5.课程设计关键字，若不想修改可键入 n" << endl;
				cin >> c;
				switch (c)
				{
				case '1': {
					int t;
					cout << "请输入修改后的课程设计编号信息：";
					cin >> t;
					infomation::cd[i].setDnum(t);
					cout << "已修改该课程设计信息！" << endl;
					return;
					break;
				};
				case '2': {
					string t;
					cout << "请输入修改后的课程设计名字信息：";
					cin >> t;
					infomation::cd[i].setName(t);
					cout << "已修改该课程设计信息！" << endl;
					return;
					break;
				};
				case '3': {
					string t;
					cout << "请输入修改后的课程设计实现技术信息：";
					cin >> t;
					infomation::cd[i].setRealize_tech(t);
					cout << "已修改该课程设计信息！" << endl;
					return;
					break;
				};
				case '4': {
					string inf1;
					cout << "请输入：" << endl;
					cout << "成员1名字：(没有可以输入‘无’)";
					cin >> inf1;
					if (inf1 != "无") {
						int n = cd_searching(inf1);
						if (n != -1) {
							infomation::cd[i].setmember1(inf1);
						}
							
						else {
							cout << "找不到该学生信息，将视作没有成员1" << endl;
							infomation::cd[i].setmember1("");
						}
					}
					else {
						infomation::cd[i].setmember1("");						return;
					}
					cout << "成员2名字：(没有可以输入‘无’)";
					cin >> inf1;
					if (inf1 != "无") {
						int n = cd_searching(inf1);
						if (n != -1) {
							infomation::cd[i].setmember2(inf1);
						}
						else {
							cout << "找不到该学生信息，将视作没有成员2" << endl;
							infomation::cd[i].setmember2("");
						}
					}
					else {
						infomation::cd[i].setmember2("");
						return;
					}
					cout << "成员3名字：(没有可以输入‘无’)";
					cin >> inf1;
					if (inf1 != "无") {
						int n = cd_searching(inf1);
						if (n != -1) {
							infomation::cd[i].setmember3(inf1);
						}
						else {
							cout << "找不到该学生信息，将视作没有成员3" << endl;
							infomation::cd[i].setmember3("");
						}
					}
					else {
						infomation::cd[i].setmember3("");
						return;
					}
					return;
					break;
				}
				case '5': {
					string t;
					cout << "请输入修改后的课程设计关键字信息：";
					cin >> t;
					infomation::cd[i].setKeyword(t);
					cout << "已修改该课程设计信息！" << endl;
					return;
					break;
				};
				default:
					return;
					break;
				}
			}
			}
		}
}
