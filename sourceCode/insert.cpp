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

int c_searching(string inf) {//���ڲ��ҿγ�����еĲ�����Ա��Ϣ
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
	cout << "��ѡ����Ҫ�������Ϣ���ࣺ1.ѧ����Ϣ 2.�γ������Ϣ�� ";
	cin >> choice;
	if (choice == 1) {					//�������Ϊ1�����ѧ����Ϣ
		int i = 0;
		string inf1; int inf2; char inf3;
		student tmp;
		cout << "������ѧ���ģ�" << endl;
		cout << "ѧ�ţ�����Ψһ)�� ";
		cin >> inf1;
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {
			if (infomation::stu[i].getName() == inf1) {
				cout << "�������ظ���ѧ����Ϣ���˳����롣" << endl;
				return;
			}
		}
		tmp.setSco(inf1);
		cout << "������";
		cin >> inf1;
		tmp.setName(inf1);
		cout << "�Ա�(f/m)��";
		cin >> inf3;
		tmp.setSex(inf3);
		cout << "���䣺";
		cin >> inf2;
		tmp.setAge(inf2);
		cout << "�༶��";
		cin >> inf1;
		tmp.setClass(inf1);
		cout << "רҵ��";
		cin >> inf1;
		tmp.setMajor(inf1);
		infomation::stuInsert(tmp);
	}
	else if (choice == 2) {						//�������Ϊ2�����γ������Ϣ
		int i = 0; int j = 0;
		string inf1;
		int inf2 = 0;
		course_design tmp;
		cout << "������γ���Ƶģ�" << endl;
		cout << "��ţ�";
		cin >> inf2;
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {
			if (infomation::cd[i].getDnum() == inf2) {
				cout << "�������ظ��ı�ţ��˳����ݲ��롣" << endl;
				return;
			}
		}
		tmp.setDnum(inf2);
		cout << "���֣�";
		cin >> inf1;
		tmp.setName(inf1);
		cout << "�ؼ��ʣ�";
		cin >> inf1;
		tmp.setKeyword(inf1);
		cout << "ʵ�ּ�����";
		cin >> inf1;
		tmp.setRealize_tech(inf1);
		cout << "��Ա1���֣�(û�п������롮�ޡ�)";
		cin >> inf1;
		if (inf1 != "��") {						//�ⲿ���ܲ�����Ӧѧ����Ϣ�Է�ֹ�������
			int n = c_searching(inf1);
			if (n != -1) {
				tmp.setmember1(inf1);
			}
			else {
				cout << "�Ҳ�����ѧ����Ϣ��������û�г�Ա1��" << endl;
			}
		}
		else {
			tmp.setmember1(inf1);
			infomation::cdInsert(tmp);
			return;
		}

		cout << "��Ա2���֣�(û�п������롮�ޡ�)";
		cin >> inf1;
		if (inf1 != "��") {
			int n = c_searching(inf1);
			if (n != -1) {
				tmp.setmember2(inf1);
			}
			else {
				cout << "�Ҳ�����ѧ����Ϣ��������û�г�Ա2��" << endl;
			}
		}
		else {
			infomation::cdInsert(tmp);
			return;
		}

		cout << "��Ա3���֣�(û�п������롮�ޡ�)";
		cin >> inf1;
		if (inf1 != "��") {
			int n = c_searching(inf1);
			if (n != -1) {
				tmp.setmember3(inf1);
			}
			else {
				cout << "�Ҳ�����ѧ����Ϣ��������û�г�Ա3��" << endl;
			}
		}
		else {
			infomation::cdInsert(tmp);
			return;
		}
		infomation::cdInsert(tmp);
	}
}
