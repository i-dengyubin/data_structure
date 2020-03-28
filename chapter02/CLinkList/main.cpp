#include <iostream>
#include "LinkList.h"
using namespace std;

int main(void) {
	LinkList* L;
	ElemType a[] = {4,5,2,9,3};
	CreateListR(L, a, 5);
	DisplayList(L);
	ElemType e;
	DeleteList(L, 3, e);
	DisplayList(L);
	InsertList(L, 4, 88);
	DisplayList(L);
	cout << e << endl;
	int i = LocateElem(L, 9);
	cout << i << endl;
	GetElem(L, 1, e);
	cout << e << endl;
	return 0;
}
