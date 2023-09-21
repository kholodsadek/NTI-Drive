#ifndef _LIST_H
#define _LIST_H
#include "STD_TYPES.h"
typedef u32 listEntry;
typedef struct myNode{
	listEntry data;
	struct myNode *pnext;
	struct myNode *pprev;
}listNode_t;

typedef struct{
	listNode_t *phead;
	listNode_t *ptail;
	u32 listSize;
}list_t;

typedef enum{
	FALSE,//0
	TRUE//1
}bool_t;

typedef enum{
	NULL_PTR=1,//SAME SIZE OF INT
	OUT_OF_RANGE=2,
	SUCCESS=3
}ErrorState;

ErrorState list_Init(list_t *pL);
ErrorState list_InsertNode(list_t *pL,listEntry e);
ErrorState list_DeleteNode(list_t *pL,listEntry e);
ErrorState list_print(const list_t *pL);
ErrorState list_listSize(const list_t *pL, u32 *pSize);
ErrorState list_freelist(list_t *pL);
ErrorState list_searchNode(const list_t *pL,listEntry e,listNode_t **ppNode);//ppNode can get the ID and pnext and pprev and also can get the address of the whole node

#endif