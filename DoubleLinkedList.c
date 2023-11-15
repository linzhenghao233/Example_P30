#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;
typedef struct DNode {
	struct DNode* prior;
	ElemType data;
	struct DNode* next;
}DLinkList, DNode;
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

//��˫�������в�������
int DLInsert(DLinkList* DL, int i, ElemType e) {
	int j;
	DLinkList* temp, * node;
	j = 1;
	temp = DL;

	while (j < i && temp->next != NULL) {
		j++;
		temp = temp->next;
	}
	if (j > i)
		return false;
	node = (DLinkList*)malloc(sizeof(DLinkList));
	if (node == NULL)
		return false;
	node->data = e;
	node->prior = temp;
	node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prior = node;
	temp->next = node;

	return true;
}

//��˫��������ɾ������
int DLDelete(DLinkList* DL, int i) {
	int j = 1;
	DLinkList* temp;
	temp = DL->next;

	while (j < i && temp != NULL) {
		j++;
		temp = temp->next;
	}
	if (j < i || temp == NULL)
		return false;
	temp->prior->next = temp->next;
	if (temp->next != NULL)
		temp->next->prior = temp->prior;
	free(temp);

	return true;
}

//��˫��ѭ��������ɾ�����
int DLClist(DLinkList* DL, ElemType e) {
	DLinkList* temp;
	temp->next;

	if (temp->next == temp)
		return false;
	while (temp->data != e && temp != DL)
		temp = temp->next;
	if (temp != DL) {
		temp->prior->next = temp->next;
		temp->next->prior = temp->prior;
		free(temp);

		return true;
	}
	else
		return false;
}