#ifndef __LINKSTACK_H__
#define __LINKSTACK_H__

typedef int ElemType;
typedef struct SNode{
	ElemType data;
	SNode *next;
}LinkStack;

void InitStack(LinkStack* &s);
void DestroyStack(LinkStack* &s);
bool StackEmpty(LinkStack* s);
bool Pop(LinkStack* &s, ElemType &e);
bool Push(LinkStack* &s, ElemType e);
bool GetTop(LinkStack* s, ElemType &e);

#endif // __LINKSTACK_H__
