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
	cout << "��ѡ����ʾ��Ϣ���� 1.ѧ����Ϣ 2.�γ������Ϣ��";
	cin >> choice;
	if (choice==1) {				//ѡ��Ϊ1����ʾѧ����Ϣ
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {//���δ�ӡ������Ϣ��ÿ��ѧ��һ��
			cout << infomation::stu[i].getName() << " ";
			cout << infomation::stu[i].getSco() << " ";
			cout << infomation::stu[i].getSex() << " ";
			cout << infomation::stu[i].getAge() << " ";
			cout << infomation::stu[i].getClass() << " ";
			cout << infomation::stu[i].getMajor() << endl;
		}
	}
	else if (choice == 2) {			//ѡ��Ϊ2����ʾ�γ������Ϣ
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {//���δ�ӡ������Ϣ��ÿ���γ����һ��
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
