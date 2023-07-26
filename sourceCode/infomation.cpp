#include"infomation.h"
infomation::infomation()
{
}

infomation::~infomation()
{
}

void infomation::stuInsert(student s)
{
	stu.push_back(s);
	stu_num++;
}


void infomation::cdInsert(course_design c)
{
	cd.push_back(c);
	cd_num++;
}

vector<student> infomation::stu;
vector<course_design> infomation::cd;
int infomation::stu_num = 0;
int infomation::cd_num = 0;


