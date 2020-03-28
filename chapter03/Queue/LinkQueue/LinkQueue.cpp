#include <iostream>
#include <cstdlib>
#include "LinkQueue.h"

using namespace std;

void InitQueue(LinkQueue* &q) {
	q = (LinkQueue*)malloc(sizeof(LinkQueue));
	q->front = q->rear = NULL;
}

void DestroyQueue(LinkQueue* &q) {
	QNode *p = q->front,*r;
	if(p != NULL) {
		r = p->next;	
		while(r != NULL) {
			free(p);
			p = r;
			r = r->next;
		}
		free(p);
	}
	free(q);
}

bool QueueEmpty(LinkQueue* q) {
	return q->rear == NULL;
}

bool EnQueue(LinkQueue* &q, ElemType e) {
	QNode* p;
	p = (QNode*)malloc(sizeof(QNode));
	p->data = e;
	p->next = NULL;
	if(q->rear == NULL)
		q->front = q->rear = p;
	else {
		q->rear->next = p;
		q->rear = p;
	}
	return true;
}

bool DeQueue(LinkQueue* &q, ElemType &e) {
	QNode* p;
	if(q->rear == NULL)
		return false;
	p = q->front;
	e = p->data;
	if(q->front == q->rear)
		q->front = q->rear = NULL;
	else {
		q->front = q->front->next;	
	}
	free(p);
	return true;
}
