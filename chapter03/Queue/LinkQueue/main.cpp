#include <iostream>
#include "LinkQueue.h"

using namespace std;

int main(void) {
	LinkQueue* q;
	InitQueue(q);
	EnQueue(q , 2);
	ElemType e;
	DeQueue(q, e);
	cout << e << endl;
	DestroyQueue(q);
	return 0;
}
