typedef struct DNode {
	struct DNode* prior;
	ElemType data;
	struct DNode* next;
}DLinkList;
DLinkList* DL, * p;

//双向链表的建立