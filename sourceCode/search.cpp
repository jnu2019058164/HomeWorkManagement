#include"search.h"
#include"infomation.h"
void search::print() {
	int num = 0;
	cout << "�����������Ϣѡ�� 1.ѧ����Ϣ��2.�γ������Ϣ��";
	cin >> num;
	if (num == 1) {
		int choise = 0;
		string key1 = "none";
		char key2 = 'n';
		int key3 = 0;
		cout << "֧���� 1.ѧ�� 2.���� 3.�Ա� 4.���� 5.�꼶 6.רҵ �������ѧ����Ϣ��" << endl;
		cout << "7.������ѱ����������Ϣ����������Ӧѡ�";
		cin >> choise;

		if (choise == 4) {
			cout << "��������Ӧ��Ϣ��";
			cin >> key3;
		}
		else if (choise == 3){
			cout << "��������Ӧ��Ϣ��";
			cin >> key2;
		}
		else if (choise == 7) {
			for (unsigned int i = 0; i < infomation::stu.size(); i++)
				infomation::stu[i].info();
			return;
		}
		else {
			cout << "��������Ӧ��Ϣ��";
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
				cout << "�ҵ������ѧ����Ϣ�" << endl;
				infomation::stu[i].info();
				found++;
			}
		}
		if (found == 0)
			cout << "�Ҳ�����Ӧѧ����Ϣ." << endl;
	}
	else if(num == 2){
		int choise = 0;
		string key = "none";
		int keynum = 1;
		cout << "֧���� 1.�γ���Ʊ�š�2.�γ�������֡�3.ʵ�ּ�����4.�μӳ�Ա��Ϣ��5.�γ���ƹؼ��� Ϊ�����ؼ���������" << endl;
		cout << "6.ѡ������ѱ����ȫ���γ������Ϣ���밴�����������������";
		cin >> choise;
		if (choise == 1) {
			cout << "�����������Ϣ��";
			cin >> keynum;
		}
		else if (choise == 6) {
			for (unsigned int i = 0; i < infomation::cd.size(); i++)
				infomation::cd[i].info();
			return;
		}
		else if ((choise == 2) | (choise == 3) | (choise == 4) | (choise == 5))
		{
			cout << "�����������Ϣ��";
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
				cout << "�ҵ�����ؿγ������Ϣ��" << endl;
				infomation::cd[i].info();
				found++;
			}
		}
		if (found == 0)
			cout << "δ���ҵ���ؿγ������Ϣ." << endl;
	}
}

search::search()
{
}

search::~search()
{
}