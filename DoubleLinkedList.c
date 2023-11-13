typedef struct DNode {
	struct DNode* prior;
	ElemType data;
	struct DNode* next;
}DLinkList;
DLinkList* DL, * p;

//双向链表的建立
int InitDList(DLinkList* DL) {
	DL = (DNode*)malloc(sizeof(DNode));
	if (DL == NULL)
		return false;
	DL->prior = DL->next = NULL;

	return true;
}

//判断双向链表
int DlEmpty(DLinkList* DL) {
	if (DL->prior == DL->next && DL->prior == NULL)
		return true;
	else
		return false;
}