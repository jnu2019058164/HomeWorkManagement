#include"mydelete.h"
#include"infomation.h"
mydelete::mydelete()
{
}

mydelete::~mydelete()
{
}

void delsch(string e) {		//���ڲ��Һ��и�ѧ����Ϣ�Ŀγ����
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
	cout << "��ѡ����Ҫɾ������Ϣ:1.ѧ����Ϣ 2.�γ������Ϣ��";
	cin >> choice;
	if (choice == 1) {				//ѡ��Ϊ1��ɾ��ѧ����Ϣ
		string t;
		cout << "������Ҫɾ����ѧ��ѧ�ţ�";
		cin >> t;
		int n = 0;
		int j = 0;
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {
			if (infomation::stu[i].getSco() == t) {
				n = i;
				char c;
				cout << "���ҵ���ѧ����" << endl;
				infomation::stu[i].info();
				cout << "�Ƿ�ȷ��ɾ����ѧ����Ϣ��y/n��";
				cin >> c;
				if (c == 'y' || c == 'Y') {						//���Ӵ�Сд
					delsch(infomation::stu[i].getName());
					infomation::stu.erase(infomation::stu.begin() + i);
					cout << "��ɾ����ѧ����Ϣ." << endl;
				}
				else if (c == 'n' || c == 'N') {
					cout << "�ݲ�ɾ����ѧ����Ϣ." << endl;
				}
				else {
					cout << "��ѡ�ǰɣ���ɾ��." << endl;
					return;
				}
			}
			j++;
		}
		if (j > infomation::stu.size()) {
			cout << "�Ҳ�����ѧ��." << endl;
		}
	}
	else if (choice == 2) {							//ѡ��Ϊ2��ɾ���γ������Ϣ
		int t;
		cout << "������γ���Ʊ��(��֪���Ļ���������searchָ������)��";
		cin >> t;
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {
			if (infomation::cd[i].getDnum() == t) {
				cout << "�ҵ��ÿγ������Ϣ��" << endl;
				infomation::cd[i].info();
				char c;
				cout << "�Ƿ�ȷ��ɾ������Ϣ��y/n��";
				cin >> c;
				if (c == 'y' || c == 'Y') {
					infomation::cd.erase(infomation::cd.begin() + i);
					cout << "��ɾ���ÿγ������Ϣ��" << endl;
				}
				else if (c == 'n' || c == 'N') {
					cout << "�ݲ�ɾ���ÿγ������Ϣ��" << endl;
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
