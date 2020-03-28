#include <iostream>
#include "CSqQueue.h"

using namespace std;

int main(void) {
	CSqQueue *q;
	InitQueue(q);
	EnQueue(q, 2);
	ElemType e;
	DeQueue(q, e);
	cout << e << endl;
	return 0;
}
