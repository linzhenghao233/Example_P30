typedef struct DNode {
	struct DNode* prior;
	ElemType data;
	struct DNode* next;
}DLinkList;
DLinkList* DL, * p;

//˫������Ľ���
int InitDList(DLinkList* DL) {
	DL = (DNode*)malloc(sizeof(DNode));
	if (DL == NULL)
		return false;
	DL->prior = DL->next = NULL;

	return true;
}

//�ж�˫������
int DlEmpty(DLinkList* DL) {
	if (DL->prior == DL->next && DL->prior == NULL)
		return true;
	else
		return false;
}