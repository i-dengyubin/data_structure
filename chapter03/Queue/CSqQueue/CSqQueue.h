#ifndef __CSQQUEUE_H__
#define __CSQQUEUE_H__

#define MAXSIZE 100

typedef int ElemType;

typedef struct QNode{
	ElemType data[MAXSIZE];
	int front,rear;
}CSqQueue;

void InitQueue(CSqQueue* &q);
void DestroyQueue(CSqQueue* &q);
bool QueueEmpty(CSqQueue* q);
bool EnQueue(CSqQueue* &q, ElemType e);
bool DeQueue(CSqQueue* &q, ElemType &e);

#endif // __SQQUEUE_H__
