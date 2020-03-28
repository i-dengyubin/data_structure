#include <iostream>
#include <cstdlib>
#include "SqList.h"

using namespace std;

void InitList(SqList* &L) {
	L = (SqList*)malloc(sizeof(SqList));
	L->length = 0;
}

void CreateList(SqList* &L, ElemType a[], int n) {
	L = (SqList*)malloc(sizeof(SqList));
	for(int i = 0; i < n; i ++) {
		L->data[i] = a[i];
	}
	L->length = n;
}

void DisplayList(SqList* L) {
	for(int i = 0; i < L->length; i ++ ) {
		cout << L->data[i] << ' ';
	}
	cout << endl;
}

bool ListEmpty(SqList* L) {
	return L->length == 0;
}

int ListLength(SqList* L) {
	return L->length;
}

void DestroyList(SqList* &L) {
	free(L);
}

bool InsertList(SqList* &L, int i, ElemType e) {
	if(i < 1 || i > L->length + 1 || L->length + 1 > MAXSIZE)
		return false;
	i--;
	for(int j = L->length; j > i; j--) {
		L->data[j] = L->data[j-1];
	}
	L->data[i] = e;
	L->length++;
	return true;
}

bool DeleteList(SqList* &L, int i, ElemType &e) {
	if(i < 1 || i > L->length)
		return false;
	i--;
	e = L->data[i];
	for(int j = i; j < L->length-1; j++)
		L->data[j] = L->data[j+1];
	L->length--;
	return true;
}

int LocateElem(SqList* L, ElemType e) {
	int i;
	for(i = 0; i < L->length; i++) {
		if(L->data[i] == e)	
			break;
	}
	if(i == L->length)
		return -1;
	else
		return ++i;
}

bool GetElem(SqList* L, int i, ElemType &e) {
	if(i < 1 || i > L->length)
		return false;
	i--;
	e = L->data[i];
	return true;
}
