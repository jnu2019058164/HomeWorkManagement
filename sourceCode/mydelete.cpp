#include"mydelete.h"
#include"infomation.h"
mydelete::mydelete()
{
}

mydelete::~mydelete()
{
}

void delsch(string e) {		//用于查找含有该学生信息的课程设计
	for (unsigned int i = 0; i < infomation::cd.size(); i++) {
		if (infomation::cd[i].getmember1() == e)
			infomation::cd[i].setmember1("");
		if (infomation::cd[i].getmember2() == e)
			infomation::cd[i].setmember2("");
		if (infomation::cd[i].getmember3() == e)
			infomation::cd[i].setmember3("");
	}
}

void mydelete::print()
{
	int choice = 0;
	cout << "请选择你要删除的信息:1.学生信息 2.课程设计信息：";
	cin >> choice;
	if (choice == 1) {				//选择为1则删除学生信息
		string t;
		cout << "请输入要删除的学生学号：";
		cin >> t;
		int n = 0;
		int j = 0;
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {
			if (infomation::stu[i].getSco() == t) {
				n = i;
				char c;
				cout << "已找到该学生：" << endl;
				infomation::stu[i].info();
				cout << "是否确认删除该学生信息？y/n：";
				cin >> c;
				if (c == 'y' || c == 'Y') {						//忽视大小写
					delsch(infomation::stu[i].getName());
					infomation::stu.erase(infomation::stu.begin() + i);
					cout << "已删除该学生信息." << endl;
				}
				else if (c == 'n' || c == 'N') {
					cout << "暂不删除该学生信息." << endl;
				}
				else {
					cout << "乱选是吧？不删了." << endl;
					return;
				}
			}
			j++;
		}
		if (j > infomation::stu.size()) {
			cout << "找不到该学生." << endl;
		}
	}
	else if (choice == 2) {							//选择为2则删除课程设计信息
		int t;
		cout << "请输入课程设计编号(不知道的话建议先用search指令搜索)：";
		cin >> t;
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {
			if (infomation::cd[i].getDnum() == t) {
				cout << "找到该课程设计信息：" << endl;
				infomation::cd[i].info();
				char c;
				cout << "是否确认删除该信息？y/n：";
				cin >> c;
				if (c == 'y' || c == 'Y') {
					infomation::cd.erase(infomation::cd.begin() + i);
					cout << "已删除该课程设计信息。" << endl;
				}
				else if (c == 'n' || c == 'N') {
					cout << "暂不删除该课程设计信息。" << endl;
				}
				else {
					return;
				}
			}
		}
	}
	else {
		return;
	}
}
