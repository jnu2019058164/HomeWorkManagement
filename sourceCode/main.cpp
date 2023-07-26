#pragma once
#include"myhelp.h"
#include"myexit.h"
#include"mynull.h"
#include"search.h"
#include"insert.h"
#include"infomation.h"
#include"mydelete.h"
#include"mymodify.h"
#include"ls.h"
#include"mystatistics.h"
#include"mysave.h"
#include"myload.h"
//菜单
void menu() {
	cout << "#欢迎来到课程综合设计管理系统，如需帮助可键入 help 获取帮助。#" << endl;
	infomation info;
	myshell shell;
	myhelp help;
	myexit exit;
	mynull null;
	search sch;
	insert ist;
	mydelete del;
	mymodify mod;
	mystatistics statistics;
	ls ls;
	mysave save;
	myload load;
	shell.setShell(0, "", null);
	shell.setShell(ins_num - 1, "", null);
	shell.setShell(1, "help", help);
	shell.setShell(2, "exit", exit);
	shell.setShell(3, "search", sch);
	shell.setShell(4, "insert", ist);
	shell.setShell(5, "delete", del);
	shell.setShell(6, "modify", mod);
	shell.setShell(7, "ls", ls);
	shell.setShell(8, "statistics", statistics);
	shell.setShell(9, "save", save);
	shell.setShell(10, "load", load);
	string ins;
	char w;
	while (1) {
		cout << "$ ";
		while (w = getchar())
		{
			if (w == '\n')
				break;
			ins.push_back(w);
		}
		shell[ins]->print();
		if (shell[ins]->getEnd())
			break;
		ins = "";
	}
}

int main() {
	menu();
	return 0;
}