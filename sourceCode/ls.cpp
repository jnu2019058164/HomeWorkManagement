#include"ls.h"
#include"infomation.h"
ls::ls()
{
}

ls::~ls()
{
}

void ls::print()
{
	int choice;
	cout << "请选择显示信息类型 1.学生信息 2.课程设计信息：";
	cin >> choice;
	if (choice==1) {				//选择为1则显示学生信息
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {//依次打印所有信息，每个学生一行
			cout << infomation::stu[i].getName() << " ";
			cout << infomation::stu[i].getSco() << " ";
			cout << infomation::stu[i].getSex() << " ";
			cout << infomation::stu[i].getAge() << " ";
			cout << infomation::stu[i].getClass() << " ";
			cout << infomation::stu[i].getMajor() << endl;
		}
	}
	else if (choice == 2) {			//选择为2则显示课程设计信息
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {//依次打印所有信息，每个课程设计一行
			if (infomation::cd[i].getName() == "none")
				continue;
			cout << infomation::cd[i].getDnum() << " ";
			cout << infomation::cd[i].getName() << " ";
			cout << infomation::cd[i].getRealize_tech() << " ";
			cout << infomation::cd[i].getKeyword() << " ";
			if(infomation::cd[i].getmember1()!="")
				cout << infomation::cd[i].getmember1() << " ";
			if (infomation::cd[i].getmember2() != "")
				cout << infomation::cd[i].getmember2() << " ";
			if (infomation::cd[i].getmember3() != "")
				cout << infomation::cd[i].getmember3() << " ";
			cout << endl;
		}
	}
}
