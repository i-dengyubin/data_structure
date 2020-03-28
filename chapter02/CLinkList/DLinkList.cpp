#include <iostream>
#include <cstdlib>
#include "DLinkList.h"
using namespace std;

void InitList(DLinkList* &L) {
	L = (DLinkList*)malloc(sizeof(DLinkList));
	L->prior = L->next = NULL;
}

void CreateListF(DLinkList* &L, ElemType a[], int n) {
	L = (DLinkList*)malloc(sizeof(DLinkList));
	L->prior = L->next = NULL;
	DLinkList* s;
	for(int i = 0; i < n; i++) {
		s = (DLinkList*)malloc(sizeof(DLinkList));
		s->data = a[i];
		s->next = L->next;
		if(L->next != NULL)
			L->next->prior = s;
		L->next = s;
		s->prior = L;
	}
}

void CreateListR(DLinkList* &L, ElemType a[], int n) {
	L = (DLinkList*)malloc(sizeof(DLinkList));
	L->next = NULL;
	DLinkList* s, *r = L;
	for(int i = 0; i < n; i++) {
		s = (DLinkList*)malloc(sizeof(DLinkList));
		s->data = a[i];
		r->next = s;
		s->prior = r;
		r = s;
	}
	r->next = NULL;
}

void DisplayList(DLinkList* L) {
	DLinkList *p = L;
	while(p->next != NULL) {
		p = p->next;
		cout << p->data << ' ';
	}
	cout << endl;
}

bool ListEmpty(DLinkList* L) {
	return L->next == NULL;
}

int ListLength(DLinkList* L) {
	int i = 0;
	DLinkList* p = L;
	while(p->next != NULL) {
		i++;
		p = p->next;
	}
	return i;
}

void DestroyList(DLinkList* &L) {
	DLinkList *p = L,*q;
	while(p->next != NULL) {
		q = p->next;	
		free(p);
		p = q;
	}
	free(p);
}

bool InsertList(DLinkList* &L, int i, ElemType e) {
	int j = 0;
	DLinkList* p = L,*s;
	while(p->next != NULL && j < i-1) {
		j++;
		p = p->next;	
	}
	if(j < i-1)
		return false;
	s = (DLinkList*)malloc(sizeof(DLinkList));
	s->data = e;
	s->next = p->next;
	if(p->next != NULL)
		p->next->prior = s;
	p->next = s;
	s->prior = p;
	return true;
}

bool DeleteList(DLinkList* &L, int i, ElemType &e) {
	int j = 0;
	DLinkList* p = L,*q;
	while(p->next != NULL && j < i-1) {
		j++;
		p = p->next;	
	}
	if(p->next == NULL)
		return false;
	e = p->next->data;
	q = p->next; // 第i个节点
	if(q->next != NULL) {
		q->next->prior = p;
		p->next = q->next;
	}
	free(q);
	return true;
}

bool GetElem(DLinkList* L, int i, ElemType &e) {
	int j = 0;
	DLinkList* p = L;
	while(p->next != NULL && j < i-1) {
		j++;
		p = p->next;
	}
	if(p->next == NULL)	
		return false;
	e = p->next->data;
	return true;
}

int LocateElem(DLinkList* L, ElemType e) {
	int i = 0;
	DLinkList* p = L;
	while(p->next != NULL && p->next->data != e){
		i++;
		p = p->next;	
	}
	if(p->next == NULL)
		return -1;
	return ++i;
}
