#ifndef __CLINKLIST_H__
#define __CLINKLIST_H__

typedef int ElemType;
typedef struct CLNode {
	ElemType data;
	LNode* *prior, *next;
}CLinkList;

void InitList(CLinkList* &L);
void CreateListF(CLinkList* &L, ElemType a[], int n);
void CreateListR(CLinkList* &L, ElemType a[], int n);
void DisplayList(CLinkList* L);
bool ListEmpty(CLinkList* L);
int ListLength(CLinkList* L);
void DestroyList(CLinkList* &L);
bool InsertList(CLinkList* &L, int i, ElemType e);
bool DeleteList(CLinkList* &L, int i, ElemType &e);
bool GetElem(CLinkList* L, int i, ElemType &e);
int LocateElem(CLinkList* L, ElemType e);

#endif // __CLINKLIST_H__
