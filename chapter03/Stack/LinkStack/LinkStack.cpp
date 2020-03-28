#include <iostream>
#include <cstdlib>
#include "LinkStack.h"

using namespace std;

void InitStack(LinkStack* &s) {
	s = (LinkStack*)malloc(sizeof(LinkStack));
	s->next = NULL;
}

void DestroyStack(LinkStack* &s) {
	LinkStack* p = s,*q = s->next; 
	while(q != NULL) {
		free(p);
		p = q;
		q = q->next;
	}
	free(p);
}

bool StackEmpty(LinkStack* s) {
	return s->next == NULL;
}

bool Push(LinkStack* &s, ElemType e) {
	LinkStack* p = (LinkStack*)malloc(sizeof(LinkStack));
	p->data = e;
	p->next = s->next;
	s->next = p;
}

bool Pop(LinkStack* &s, ElemType &e) {
	LinkStack* p;
	if(s->next == NULL)
		return false;
	p = s->next;
	e = s->next->data;
	s->next = s->next->next;
	free(p);
	return true;
}

bool GetTop(LinkStack* s, ElemType &e) {
	if(s->next == NULL)
		return false;
	e = s->next->data;
	return true;
}

