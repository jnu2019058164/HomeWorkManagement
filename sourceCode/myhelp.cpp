#include "myhelp.h"
#include<iomanip>
myhelp::myhelp()
{
	
}

void myhelp::print() {
	cout << "--search:" << endl;
	cout << "                搜索相关信息。" << endl;
	cout << "--ls:" << endl;
	cout << "                显示相关信息。" << endl;
	cout << "--delete" << endl;
	cout << "                删除相关信息。" << endl;
	cout << "--insert" << endl;
	cout << "                插入相关信息。" << endl;
	cout << "--modify" << endl;
	cout << "                修改相关信息。" << endl;
	cout << "--statistics" << endl;
	cout << "                统计相关信息。" << endl;
	cout << "--save" << endl;
	cout << "                存取当前拥有的信息。" << endl;
	cout << "--load" << endl;
	cout << "                读取当前拥有的信息" << endl;
	cout << "--exit" << endl;
	cout << "                退出课程管理系统。" << endl;
}