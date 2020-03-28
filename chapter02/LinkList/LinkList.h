#ifndef __LINKLIST_H__
#define __LINKLIST_H__

typedef int ElemType;
typedef struct LNode {
	ElemType data;
	LNode* next;
}LinkList;

void InitList(LinkList* &L);
void CreateListF(LinkList* &L, ElemType a[], int n);
void CreateListR(LinkList* &L, ElemType a[], int n);
void DisplayList(LinkList* L);
bool ListEmpty(LinkList* L);
int ListLength(LinkList* L);
void DestroyList(LinkList* &L);
bool InsertList(LinkList* &L, int i, ElemType e);
bool DeleteList(LinkList* &L, int i, ElemType &e);
bool GetElem(LinkList* L, int i, ElemType &e);
int LocateElem(LinkList* L, ElemType e);

#endif // __LINKLIST_H__
