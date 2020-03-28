#include <iostream>
#include "SqQueue.h"

using namespace std;

int main(void) {
	SqQueue *q;
	InitQueue(q);
	EnQueue(q, 2);
	ElemType e;
	DeQueue(q, e);
	cout << e << endl;
	return 0;
}
