#include"search.h"
#include"infomation.h"
void search::print() {
	int num = 0;
	cout << "请输入查找信息选项 1.学生信息，2.课程设计信息：";
	cin >> num;
	if (num == 1) {
		int choise = 0;
		string key1 = "none";
		char key2 = 'n';
		int key3 = 0;
		cout << "支持以 1.学号 2.姓名 3.性别 4.年龄 5.年级 6.专业 查找相关学生信息，" << endl;
		cout << "7.可输出已保存的所有信息，请输入相应选项：";
		cin >> choise;

		if (choise == 4) {
			cout << "请输入相应信息：";
			cin >> key3;
		}
		else if (choise == 3){
			cout << "请输入相应信息：";
			cin >> key2;
		}
		else if (choise == 7) {
			for (unsigned int i = 0; i < infomation::stu.size(); i++)
				infomation::stu[i].info();
			return;
		}
		else {
			cout << "请输入相应信息：";
			cin >> key1;
		}
		int found=0;
		
		for (unsigned int i = 0; i < infomation::stu.size(); i++)
		{	
			if (key1 == infomation::stu[i].getSco() ||
				key1 == infomation::stu[i].getName() ||
				key2 == infomation::stu[i].getSex() ||
				key3 == infomation::stu[i].getAge() ||
				key1 == infomation::stu[i].getClass() ||
				key1 == infomation::stu[i].getMajor()) {
				cout << "找到了相关学生信息项：" << endl;
				infomation::stu[i].info();
				found++;
			}
		}
		if (found == 0)
			cout << "找不到相应学生信息." << endl;
	}
	else if(num == 2){
		int choise = 0;
		string key = "none";
		int keynum = 1;
		cout << "支持以 1.课程设计编号、2.课程设计名字、3.实现技术、4.参加成员信息、5.课程设计关键字 为搜索关键词搜索，" << endl;
		cout << "6.选项输出已保存的全部课程设计信息，请按编号输入搜索方案：";
		cin >> choise;
		if (choise == 1) {
			cout << "请输入相关信息：";
			cin >> keynum;
		}
		else if (choise == 6) {
			for (unsigned int i = 0; i < infomation::cd.size(); i++)
				infomation::cd[i].info();
			return;
		}
		else if ((choise == 2) | (choise == 3) | (choise == 4) | (choise == 5))
		{
			cout << "请输入相关信息：";
			cin >> key;
		}
		else
			return;
		int found = 0;
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {
			if (choise == 1 && infomation::cd[i].getDnum() == keynum||
				choise == 2 && infomation::cd[i].getName() == key||
				choise==3&&infomation::cd[i].getRealize_tech()==key||
				choise==5&&infomation::cd[i].getKeyword()==key||
				choise == 4 && infomation::cd[i].getmember1()==key||
				choise == 4 && infomation::cd[i].getmember2() == key || 
				choise == 4 && infomation::cd[i].getmember3() == key||
				infomation::cd[i].getName()!="none") {
				cout << "找到了相关课程设计信息：" << endl;
				infomation::cd[i].info();
				found++;
			}
		}
		if (found == 0)
			cout << "未能找到相关课程设计信息." << endl;
	}
}

search::search()
{
}

search::~search()
{
}