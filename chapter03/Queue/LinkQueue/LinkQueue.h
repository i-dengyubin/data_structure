#ifndef __LINKQUEUE_H__
#define __LINKQUEUE_H__

typedef int ElemType;

typedef struct QNode{
	ElemType data;
	QNode* next;
}QNode;

typedef struct {
	QNode* front;
	QNode* rear;
}LinkQueue;

void InitQueue(LinkQueue* &q);
void DestroyQueue(LinkQueue* &q);
bool QueueEmpty(LinkQueue* q);
bool EnQueue(LinkQueue* &q, ElemType e);
bool DeQueue(LinkQueue* &q, ElemType &e);

#endif // __LINKQUEUE_H__
