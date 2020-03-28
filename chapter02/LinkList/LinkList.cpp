#include <iostream>
#include <cstdlib>
#include "LinkList.h"
using namespace std;

void InitList(LinkList* &L) {
	L = (LinkList*)malloc(sizeof(LinkList));
	L->next = NULL;
}

void CreateListF(LinkList* &L, ElemType a[], int n) {
	L = (LinkList*)malloc(sizeof(LinkList));
	L->next = NULL;
	LinkList* s;
	for(int i = 0; i < n; i++) {
		s = (LinkList*)malloc(sizeof(LinkList));
		s->data = a[i];
		s->next = L->next;
		L->next = s;
	}
}

void CreateListR(LinkList* &L, ElemType a[], int n) {
	L = (LinkList*)malloc(sizeof(LinkList));
	L->next = NULL;
	LinkList* s, *r = L;
	for(int i = 0; i < n; i++) {
		s = (LinkList*)malloc(sizeof(LinkList));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

void DisplayList(LinkList* L) {
	LinkList *p = L;
	while(p->next != NULL) {
		p = p->next;
		cout << p->data << ' ';
	}
	cout << endl;
}

bool ListEmpty(LinkList* L) {
	return L->next == NULL;
}

int ListLength(LinkList* L) {
	int i = 0;
	LinkList* p = L;
	while(p->next != NULL) {
		i++;
		p = p->next;
	}
	return i;
}

void DestroyList(LinkList* &L) {
	LinkList *p = L,*q;
	while(p->next != NULL) {
		q = p->next;	
		free(p);
		p = q;
	}
	free(p);
}

bool InsertList(LinkList* &L, int i, ElemType e) {
	int j = 0;
	LinkList* p = L,*s;
	while(p->next != NULL && j < i-1) {
		j++;
		p = p->next;	
	}
	if(j < i-1)
		return false;
	s = (LinkList*)malloc(sizeof(LinkList));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

bool DeleteList(LinkList* &L, int i, ElemType &e) {
	int j = 0;
	LinkList* p = L,*q;
	while(p->next != NULL && j < i-1) {
		j++;
		p = p->next;	
	}
	if(p->next == NULL)
		return false;
	e = p->next->data;
	q = p->next;
	p->next = p->next->next;
	free(q);
	return true;
}

bool GetElem(LinkList* L, int i, ElemType &e) {
	int j = 0;
	LinkList* p = L;
	while(p->next != NULL && j < i-1) {
		j++;
		p = p->next;
	}
	if(p->next == NULL)	
		return false;
	e = p->next->data;
	return true;
}

int LocateElem(LinkList* L, ElemType e) {
	int i = 0;
	LinkList* p = L;
	while(p->next != NULL && p->next->data != e){
		i++;
		p = p->next;	
	}
	if(p->next == NULL)
		return -1;
	return ++i;
}
