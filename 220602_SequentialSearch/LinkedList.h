#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "Score.h"

typedef Score ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
} Node;

/* �Լ� ���� ���� */
Node* SLL_CreateNode(ElementType NewData);
void SLL_DestroyNode(Node* node);
void SLL_AppendNode(Node** node, Node* NewNode);
void SLL_InsertAfter(Node* Current, Node* Newnode);
void SLL_InsertNewHead(Node** Head, Node* NewHead);
void SLL_RemoveNode(Node** Head, Node* Remove);
Node* SLL_GetNodeAt(Node* Head, int Location);
int SLL_GetNodeCount(Node* Head);


#endif


