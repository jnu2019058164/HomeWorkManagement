#include "myshell.h"
//myshell定义
/********************************************************/
bool myshell::getEnd() {
	return end;
};
void myshell::setEnd(bool e) {
	end = e;
};
void myshell::print() {
	cout << endl;
}
void myshell::setShell(int n, string ins, myshell& sh) {
	instrument[n] = ins;
	s[n] = &sh;
}