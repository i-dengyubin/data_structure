#ifndef __SQLIST_H__
#define __SQLIST_H__

#define MAXSIZE 100

typedef int ElemType;
typedef struct SqList {
	ElemType data[MAXSIZE];
	int length;
}SqList;

void InitList(SqList* &L);
void CreateList(SqList* &L, ElemType a[], int n);
void DisplayList(SqList* L);
bool ListEmpty(SqList* L);
void DestroyList(SqList* &L);
int ListLength(SqList* L);
bool InsertList(SqList* &L, int i, ElemType e);
bool DeleteList(SqList* &L, int i, ElemType &e);
int LocateElem(SqList* L, ElemType e);
bool GetElem(SqList* L, int i ,ElemType &e);

#endif // __SQLIST_H__
