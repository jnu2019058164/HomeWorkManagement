#include"mysave.h"
#include<fstream>
#include"infomation.h"
#include<string>
mysave::mysave()
{
}

mysave::~mysave()
{
}

void mysave::print()
{
	
	ofstream w_stu("student_info.chh", ios::out|ios::binary);
	ofstream w_cd("course_design_info.chh", ios::out|ios::binary);
	int stu_num = infomation::stu.size();
	int cd_num = infomation::cd.size();
	int string_block = 0;			//存取字符串长度（大小）
	if (w_stu.is_open()) {
		int stu_block = 0;
		w_stu.write((char*)&stu_num, sizeof(int));
		for (unsigned int i = 0; i < infomation::stu.size(); i++) {
			string sco = infomation::stu[i].getSco();//学号
			string_block = strlen(sco.c_str());
			w_stu.write((char*)&string_block, sizeof(int));
			w_stu.write((char*)sco.c_str(), string_block);

			string name = infomation::stu[i].getName();//姓名
			string_block = strlen(name.c_str());
			w_stu.write((char*)&string_block, sizeof(int));
			w_stu.write((char*)name.c_str(), string_block);

			char sex = infomation::stu[i].getSex();//性别
			w_stu.write((char*)&sex, sizeof(char));

			int age = infomation::stu[i].getAge();//年龄
			w_stu.write((char*)&age, sizeof(int));

			string clss = infomation::stu[i].getClass();//班级
			string_block = strlen(clss.c_str());
			w_stu.write((char*)&string_block, sizeof(int));
			w_stu.write((char*)clss.c_str(), string_block);

			string major = infomation::stu[i].getMajor();//专业
			string_block = strlen(major.c_str());
			w_stu.write((char*)&string_block, sizeof(int));
			w_stu.write((char*)major.c_str(), string_block);
		}
		w_stu.close();
	}
	else {
		cout << "学生信息存取失败，请再试一次。" << endl;
	}
	if (w_cd.is_open()) {
		int cd_block = 0; int string_block = 0;
		int dnum = 0; string name, keyword, realize_tech, member1, member2,member3;
		w_cd.write((char*)&cd_num, sizeof(int));
		for (unsigned int i = 0; i < infomation::cd.size(); i++) {

			dnum = infomation::cd[i].getDnum();//编号
			w_cd.write((char*)&dnum,sizeof(int));

			name = infomation::cd[i].getName();//名字
			string_block = strlen(name.c_str());
			w_cd.write((char*)&string_block, sizeof(int));
			w_cd.write((char*)name.c_str(), string_block);

			realize_tech = infomation::cd[i].getRealize_tech();//关键字
			string_block = strlen(realize_tech.c_str());
			w_cd.write((char*)&string_block, sizeof(int));
			w_cd.write((char*)realize_tech.c_str(), string_block);

			keyword = infomation::cd[i].getKeyword();//实现技术
			string_block = strlen(keyword.c_str());
			w_cd.write((char*)&string_block, sizeof(int));
			w_cd.write((char*)keyword.c_str(), string_block);

			member1 = infomation::cd[i].getmember1();//成员1
			string_block = strlen(member1.c_str());
			w_cd.write((char*)&string_block, sizeof(int));
			w_cd.write((char*)member1.c_str(), string_block);

			member2 = infomation::cd[i].getmember2();//成员2
			string_block = strlen(member2.c_str());
			w_cd.write((char*)&string_block, sizeof(int));
			w_cd.write((char*)member2.c_str(), string_block);

			member3 = infomation::cd[i].getmember3();//成员3
			string_block = strlen(member3.c_str());
			w_cd.write((char*)&string_block, sizeof(int));
			w_cd.write((char*)member3.c_str(), string_block);
		}
		w_cd.close();
	}
	else {
		cout << "课程设计信息存取失败，请再试一次。" << endl;
	}
	cout << "所有信息已存取,学生信息存于工作目录下的student_info.chh文件，" << endl;
	cout << "课程设计信息存于工作目录下的course_design_info.chh文件。" << endl;
}
