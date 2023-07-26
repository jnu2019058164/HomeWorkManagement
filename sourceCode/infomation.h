#pragma once
#include"student.h"
#include"cource_design.h"
#include<vector>

class infomation
{
public:
	infomation();
	~infomation();
	static vector<student> stu;
	static vector<course_design> cd;
	static int stu_num;
	static int cd_num;
	static void stuInsert(student s);
	static void cdInsert(course_design c);
private:

};


