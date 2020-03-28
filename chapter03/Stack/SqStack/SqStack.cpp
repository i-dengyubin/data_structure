#include <iostream>
#include <cstdlib>
#include "SqStack.h"

using namespace std;

void InitStack(SqStack* &s) {
	s = (SqStack*)malloc(sizeof(SqStack));
	s->top = -1;
}

void DestroyStack(SqStack* &s) {
	free(s);
}

bool StackEmpty(SqStack* s) {
	return s->top == -1;
}

bool Push(SqStack* &s,ElemType e) {
	if(s->top == MAXSIZE - 1)	 // 栈满
		return false;
	s->top++;
	s->data[s->top] = e;
	return true;
}

bool Pop(SqStack* &s, ElemType &e) {
	if(s->top == -1)
		return false;
	e = s->data[s->top];
	s->top--;
	return true;
}

bool GetTop(SqStack* s, ElemType &e) {
	if(s->top == -1)
		return false;
	e = s->data[s->top];
	return true;
}
