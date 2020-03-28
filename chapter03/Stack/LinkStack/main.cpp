#include <iostream>
#include "LinkStack.h"

using namespace std;

int main(void) {
	LinkStack* s;

	InitStack(s);

	Push(s, 4);
	ElemType e;
	Pop(s, e);
	cout << e << endl;
	Push(s, 6);
	Push(s, 9);
	Push(s, 4);
	Push(s, 3);
	GetTop(s, e);
	cout << e << endl;
	DestroyStack(s);
	return 0;
}
