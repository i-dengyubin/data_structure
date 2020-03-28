#ifndef __DLINKLIST_H__
#define __DLINKLIST_H__

typedef int ElemType;
typedef struct DLNode {
	ElemType data;
	DLNode *prior, *next;
}DLinkList;

void InitList(DLinkList* &L);
void CreateListF(DLinkList* &L, ElemType a[], int n);
void CreateListR(DLinkList* &L, ElemType a[], int n);
void DisplayList(DLinkList* L);
bool ListEmpty(DLinkList* L);
int ListLength(DLinkList* L);
void DestroyList(DLinkList* &L);
bool InsertList(DLinkList* &L, int i, ElemType e);
bool DeleteList(DLinkList* &L, int i, ElemType &e);
bool GetElem(DLinkList* L, int i, ElemType &e);
int LocateElem(DLinkList* L, ElemType e);

#endif // __DLINKLIST_H__
