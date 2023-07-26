#include"mystatistics.h"
#include"infomation.h"

mystatistics::mystatistics()
{
}

mystatistics::~mystatistics()
{
}

void mystatistics::print()
{
	cout << "请输入需要统计的类型：1.学生信息 2.课程设计信息：";
	int choice = 0;
	cin >> choice;
	if (choice == 1) {
		cout << "可根据 1.姓名 2.性别 3.年龄 4.班级 5.专业 统计相关人数：";
		char c;
		cin >> c;
		switch (c)
		{
		case '1': {
			string t;
			int sum = 0;
			cout << "请输入姓名信息：";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getName() == t) {
					sum++;
				}
			}
			cout << "叫" << t << "的共有 " << sum << "人" << endl;
			break;
		}
		case '2': {
			char t;
			int sum = 0;
			cout << "请输入性别信息(f/m)：";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getSex() == t) {
					sum++;
				}
			}
			if (t == 'f')
				cout << "女生共有" << sum << "人" << endl;
			else if (t == 'm')
				cout << "男生共有" << sum << "人" << endl;
			else
				cout << "输入不合法！" << endl;
			break;
		}
		
		case '3': {
			int t;
			int sum = 0;
			cout << "请输入年龄信息：";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getAge() == t) {
					sum++;
				}
			}
			cout << t << "岁的有 " << sum << " 人" << endl;
			break;
		}

		case '4': {
			string t;
			int sum = 0;
			cout << "请输入班级信息：";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getClass() == t) {
					sum++;
				}
			}
			cout << t << "的有 " << sum << " 人" << endl;
			break;
		}

		case '5': {
			string t;
			int sum = 0;
			cout << "请输入专业信息：";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getMajor() == t) {
					sum++;
				}
			}
			cout << "学" << t << "的有 " << sum << " 人" << endl;
			break;
		}

		default: {
			cout << "非法键入，返回主菜单。" << endl;
			return;
			break;
		}	
		}
	}
	else if (choice == 2) {
		cout << "可根据 1.课程设计名字 2.实现技术 3.课程设计关键字统计相关人数" << endl;
		char c;
		cin >> c;
		switch (c)
		{
		case '1': {
			int sum = 0; int stusum = 0;
			string t;
			cout << "请输入课程设计名字：";
			cin >> t;
			cout << "选择这个题目的学生有：";
			for (unsigned int i = 0; i < infomation::cd.size(); i++) {
				if (infomation::cd[i].getName() == t) {
					if (infomation::cd[i].getmember1() != "") {
						cout << infomation::cd[i].getmember1() << "、";
						stusum++;
					}
					if (infomation::cd[i].getmember1() != "") {
						cout << infomation::cd[i].getmember1() << "、";
						stusum++;
					}
					if (infomation::cd[i].getmember1() != "") {
						cout << infomation::cd[i].getmember1() << "、";
						stusum++;
					}
					sum++;
				}
			}
			if (stusum == 0)
				cout << "none,";
			cout << "共计 " << stusum << " 人。" << endl;
			cout << "选择这个题目的小组有：" << sum << "个。" << endl;
			break;
		}

		case '2': {
			int sum = 0; 
			string t;
			cout << "请输入课程设计实现技术信息：";
			cin >> t;
			for (unsigned int i = 0; i < infomation::cd.size(); i++) {
				if (infomation::cd[i].getRealize_tech() == t) {
					sum++;
				}
			}
			cout << "用到这个技术的小组有：" << sum << "个。" << endl;
			break;
		}

		case '3': {
			int sum = 0;
			string t;
			cout << "请输入课程设计关键字信息：";
			cin >> t;
			for (unsigned int i = 0; i < infomation::cd.size(); i++) {
				if (infomation::cd[i].getRealize_tech() == t) {
					sum++;
				}
			}
			cout << "与该关键字相关的课程设计有：" << sum << "个。" << endl;
			break;
		}
		default: {
			cout << "输入非法，取消统计。" << endl;
			break;
		}
		}
	}
	else {
		cout << "键入非法，返回主菜单。" << endl;
		return;
	}
}
