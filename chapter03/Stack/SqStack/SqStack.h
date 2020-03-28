#ifndef __SQSTACK_H__
#define __SQSTACK_H__

#define MAXSIZE 100
typedef int ElemType;

typedef struct {
	ElemType data[MAXSIZE];
	int top;
}SqStack;

void InitStack(SqStack* &s);
void DestroyStack(SqStack* &s);
bool StackEmpty(SqStack* s);
bool Push(SqStack* &s, ElemType e);
bool Pop(SqStack* &s, ElemType &e);
bool GetTop(SqStack* s);
#endif // __SQSTACK_H__
