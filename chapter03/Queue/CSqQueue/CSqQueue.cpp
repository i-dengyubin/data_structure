#include <iostream>
#include <cstdlib>
#include "CSqQueue.h"

void InitQueue(CSqQueue* &q){
	q = (CSqQueue*)malloc(sizeof(CSqQueue));
	q->front = q->rear = 0;
}

void DestroyQueue(CSqQueue* &q) {
	free(q);
}

bool QueueEmpty(CSqQueue* q) {
	return q->front == q->rear;
}

bool EnQueue(CSqQueue* &q, ElemType e) {
	if((q->rear + 1) % MAXSIZE == q->front)
		return false;
	q->data[q->rear] = e;
	q->rear = (q->rear + 1) % MAXSIZE;
	return true;
}

bool DeQueue(CSqQueue* &q, ElemType &e) {
	if(q->front == q->rear)
		return false;
	e = q->data[q->front];
	q->front = (q->front + 1) % MAXSIZE;
	return true;
}
