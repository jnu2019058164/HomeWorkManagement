#include"mymodify.h"
#include"infomation.h"
mymodify::mymodify()
{
}

mymodify::~mymodify()
{
}

int cd_searching(string inf) {		//�޸Ŀγ���Ʋ���ѧ��ʱ�õ��Ĳ���ѧ������
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
	cout << "��ѡ����Ҫ�޸ĵ���Ϣ:1.ѧ����Ϣ 2.�γ������Ϣ��";
	cin >> choice;
	if (choice == 1) {//ѧ����Ϣ
		string t;
		cout << "������Ҫ�޸ĵ�ѧ��ѧ��(��֪���Ļ���������searchָ������)��";
		cin >> t;
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {
			if (infomation::stu[i].getSco() == t) {
				char c;
				cout << "���ҵ���ѧ����" << endl;
				infomation::stu[i].info();
				cout << "��ѡ��Ҫ�޸ĵ�ѧ����Ϣ��1.ѧ�� 2.���� 3.�Ա� " << endl;
				cout << "4.���� 5.�꼶 6.רҵ,�������޸Ŀɼ��� n��";
				cin >> c;
				switch (c)
				{
				case '1': {
					string t;
					cout << "�������޸ĺ��ѧ����Ϣ��";
					cin >> t;
					infomation::stu[i].setSco(t);
					cout << "���޸ĸ�ѧ����Ϣ��" << endl;
					return;
					break;
				};
				case '2': {
					string t;
					cout << "�������޸ĺ��������Ϣ��";
					cin >> t;
					infomation::stu[i].setName(t);
					cout << "���޸ĸ�ѧ����Ϣ��" << endl;
					return;
					break;
				};
				case '3': {
					char t;
					cout << "�������޸ĺ���Ա���Ϣ��";
					cin >> t;
					infomation::stu[i].setSex(t);
					cout << "���޸ĸ�ѧ����Ϣ��" << endl;
					return;
					break;
				};
				case '4': {
					int t;
					cout << "�������޸ĺ��������Ϣ��";
					cin >> t;
					infomation::stu[i].setAge(t);
					cout << "���޸ĸ�ѧ����Ϣ��" << endl;
					return;
					break;
				}
				case '5': {
					string t;
					cout << "�������޸ĺ���꼶��Ϣ��";
					cin >> t;
					infomation::stu[i].setClass(t);
					cout << "���޸ĸ�ѧ����Ϣ��" << endl;
					return;
					break;
				}
				case '6': {
					string t;
					cout << "�������޸ĺ��רҵ��Ϣ��";
					cin >> t;
					infomation::stu[i].setMajor(t);
					cout << "���޸ĸ�ѧ����Ϣ��" << endl;
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
	else if (choice == 2) {//�޸Ŀγ������Ϣ
		int t;
		cout << "������γ���Ʊ��(��֪���Ļ���������searchָ������)��";
		cin >> t;
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {
			if (infomation::cd[i].getDnum() == t) {
				cout << "�ҵ��ÿγ������Ϣ��" << endl;
				infomation::cd[i].info();
				char c;
				cout << "��ѡ��Ҫ�޸ĵĿγ������Ϣ�� 1.�γ���Ʊ�š�2.�γ�������֡�3.ʵ�ּ�����4.�μӳ�Ա��Ϣ��5.�γ���ƹؼ��֣��������޸Ŀɼ��� n" << endl;
				cin >> c;
				switch (c)
				{
				case '1': {
					int t;
					cout << "�������޸ĺ�Ŀγ���Ʊ����Ϣ��";
					cin >> t;
					infomation::cd[i].setDnum(t);
					cout << "���޸ĸÿγ������Ϣ��" << endl;
					return;
					break;
				};
				case '2': {
					string t;
					cout << "�������޸ĺ�Ŀγ����������Ϣ��";
					cin >> t;
					infomation::cd[i].setName(t);
					cout << "���޸ĸÿγ������Ϣ��" << endl;
					return;
					break;
				};
				case '3': {
					string t;
					cout << "�������޸ĺ�Ŀγ����ʵ�ּ�����Ϣ��";
					cin >> t;
					infomation::cd[i].setRealize_tech(t);
					cout << "���޸ĸÿγ������Ϣ��" << endl;
					return;
					break;
				};
				case '4': {
					string inf1;
					cout << "�����룺" << endl;
					cout << "��Ա1���֣�(û�п������롮�ޡ�)";
					cin >> inf1;
					if (inf1 != "��") {
						int n = cd_searching(inf1);
						if (n != -1) {
							infomation::cd[i].setmember1(inf1);
						}
							
						else {
							cout << "�Ҳ�����ѧ����Ϣ��������û�г�Ա1" << endl;
							infomation::cd[i].setmember1("");
						}
					}
					else {
						infomation::cd[i].setmember1("");						return;
					}
					cout << "��Ա2���֣�(û�п������롮�ޡ�)";
					cin >> inf1;
					if (inf1 != "��") {
						int n = cd_searching(inf1);
						if (n != -1) {
							infomation::cd[i].setmember2(inf1);
						}
						else {
							cout << "�Ҳ�����ѧ����Ϣ��������û�г�Ա2" << endl;
							infomation::cd[i].setmember2("");
						}
					}
					else {
						infomation::cd[i].setmember2("");
						return;
					}
					cout << "��Ա3���֣�(û�п������롮�ޡ�)";
					cin >> inf1;
					if (inf1 != "��") {
						int n = cd_searching(inf1);
						if (n != -1) {
							infomation::cd[i].setmember3(inf1);
						}
						else {
							cout << "�Ҳ�����ѧ����Ϣ��������û�г�Ա3" << endl;
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
					cout << "�������޸ĺ�Ŀγ���ƹؼ�����Ϣ��";
					cin >> t;
					infomation::cd[i].setKeyword(t);
					cout << "���޸ĸÿγ������Ϣ��" << endl;
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
