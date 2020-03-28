#ifndef __SQQUEUE_H__
#define __SQQUEUE_H__

#define MAXSIZE 100

typedef int ElemType;

typedef struct QNode{
	ElemType data[MAXSIZE];
	int front,rear;
}SqQueue;

void InitQueue(SqQueue* &q);
void DestroyQueue(SqQueue* &q);
bool QueueEmpty(SqQueue* q);
bool EnQueue(SqQueue* &q, ElemType e);
bool DeQueue(SqQueue* &q, ElemType &e);

#endif // __SQQUEUE_H__
