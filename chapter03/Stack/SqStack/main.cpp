#include <iostream>
#include "SqStack.h"

using namespace std;

int main(void) {
	SqStack* s;
	InitStack(s);
	Push(s, 3);
	Push(s, 4);
	Push(s, 9);
	for(int i = 0; i < 10; i++)
		Push(s, i);

	ElemType e;
	Pop(s, e);
	cout << e << endl;
	return 0;
}
