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
	cout << "��������Ҫͳ�Ƶ����ͣ�1.ѧ����Ϣ 2.�γ������Ϣ��";
	int choice = 0;
	cin >> choice;
	if (choice == 1) {
		cout << "�ɸ��� 1.���� 2.�Ա� 3.���� 4.�༶ 5.רҵ ͳ�����������";
		char c;
		cin >> c;
		switch (c)
		{
		case '1': {
			string t;
			int sum = 0;
			cout << "������������Ϣ��";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getName() == t) {
					sum++;
				}
			}
			cout << "��" << t << "�Ĺ��� " << sum << "��" << endl;
			break;
		}
		case '2': {
			char t;
			int sum = 0;
			cout << "�������Ա���Ϣ(f/m)��";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getSex() == t) {
					sum++;
				}
			}
			if (t == 'f')
				cout << "Ů������" << sum << "��" << endl;
			else if (t == 'm')
				cout << "��������" << sum << "��" << endl;
			else
				cout << "���벻�Ϸ���" << endl;
			break;
		}
		
		case '3': {
			int t;
			int sum = 0;
			cout << "������������Ϣ��";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getAge() == t) {
					sum++;
				}
			}
			cout << t << "����� " << sum << " ��" << endl;
			break;
		}

		case '4': {
			string t;
			int sum = 0;
			cout << "������༶��Ϣ��";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getClass() == t) {
					sum++;
				}
			}
			cout << t << "���� " << sum << " ��" << endl;
			break;
		}

		case '5': {
			string t;
			int sum = 0;
			cout << "������רҵ��Ϣ��";
			cin >> t;
			for (unsigned int i = 0; i < infomation::stu.size(); i++) {
				if (infomation::stu[i].getMajor() == t) {
					sum++;
				}
			}
			cout << "ѧ" << t << "���� " << sum << " ��" << endl;
			break;
		}

		default: {
			cout << "�Ƿ����룬�������˵���" << endl;
			return;
			break;
		}	
		}
	}
	else if (choice == 2) {
		cout << "�ɸ��� 1.�γ�������� 2.ʵ�ּ��� 3.�γ���ƹؼ���ͳ���������" << endl;
		char c;
		cin >> c;
		switch (c)
		{
		case '1': {
			int sum = 0; int stusum = 0;
			string t;
			cout << "������γ�������֣�";
			cin >> t;
			cout << "ѡ�������Ŀ��ѧ���У�";
			for (unsigned int i = 0; i < infomation::cd.size(); i++) {
				if (infomation::cd[i].getName() == t) {
					if (infomation::cd[i].getmember1() != "") {
						cout << infomation::cd[i].getmember1() << "��";
						stusum++;
					}
					if (infomation::cd[i].getmember1() != "") {
						cout << infomation::cd[i].getmember1() << "��";
						stusum++;
					}
					if (infomation::cd[i].getmember1() != "") {
						cout << infomation::cd[i].getmember1() << "��";
						stusum++;
					}
					sum++;
				}
			}
			if (stusum == 0)
				cout << "none,";
			cout << "���� " << stusum << " �ˡ�" << endl;
			cout << "ѡ�������Ŀ��С���У�" << sum << "����" << endl;
			break;
		}

		case '2': {
			int sum = 0; 
			string t;
			cout << "������γ����ʵ�ּ�����Ϣ��";
			cin >> t;
			for (unsigned int i = 0; i < infomation::cd.size(); i++) {
				if (infomation::cd[i].getRealize_tech() == t) {
					sum++;
				}
			}
			cout << "�õ����������С���У�" << sum << "����" << endl;
			break;
		}

		case '3': {
			int sum = 0;
			string t;
			cout << "������γ���ƹؼ�����Ϣ��";
			cin >> t;
			for (unsigned int i = 0; i < infomation::cd.size(); i++) {
				if (infomation::cd[i].getRealize_tech() == t) {
					sum++;
				}
			}
			cout << "��ùؼ�����صĿγ�����У�" << sum << "����" << endl;
			break;
		}
		default: {
			cout << "����Ƿ���ȡ��ͳ�ơ�" << endl;
			break;
		}
		}
	}
	else {
		cout << "����Ƿ����������˵���" << endl;
		return;
	}
}
