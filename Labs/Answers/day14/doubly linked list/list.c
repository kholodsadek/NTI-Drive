#include <stdio.h>
#include "list.h"
#include "STD_TYPES.h"
#include <stdlib.h>

static ErrorState list_IsEmpty(const list_t *pL,bool_t *pstate);

ErrorState list_Init(list_t *pL)
{
	pL->phead=pL->ptail=NULL;
	pL->listSize=0;
}
ErrorState list_InsertNode(list_t *pL,listEntry e)
{
	listNode_t* pn=(listNode_t*)malloc(sizeof(listNode_t));
	if(pn==NULL)
	{
		printf("heap is full");
	}
	else
	{
		pn->data=e;
		pn->pnext=NULL;
		pn->pprev=NULL;
		bool_t state;
	list_IsEmpty(pL, &state);
	if(state==TRUE) 
	{
		pL->phead=pL->ptail=pn;
		pL->listSize++;
	}
	else{
		listNode_t *temp=pL->phead;
		//search for the right place
		while(temp!=NULL && temp->data < pn->data)//1-list ends, 2- or there's an element smaller than the data  entered----> those break the loop
		{
			temp=temp->pnext;
		}
		if(temp==pL->phead)//@ head while will be false becase the second condition is false
		{
			pn->pnext=temp;
			temp->pprev=pn;
			pL->phead=pn;
		}
		else if(temp==NULL)
		{
			pn->pprev=pL->ptail;
			pL->ptail->pnext=pn;
			pL->ptail=pn;
		}//@tail
		else//middle
		{
			pn->pprev=temp->pprev;
			pn->pnext=temp;
			temp->pprev->pnext=pn;
			temp->pprev=pn;
		}
		pL->listSize++;
	}
	}
}
ErrorState list_DeleteNode(list_t *pL,listEntry e)
{
		bool_t state;
	list_IsEmpty(pL, &state);
	if(state==TRUE) 
	{
		printf("can not delete\n");
	}
	else{
		listNode_t *temp;
		list_searchNode(pL,e,&temp);
		if(temp==NULL) printf("ID not found\n");
		else
		{//must be this order
			if(pL->phead==pL->ptail)
			{
				free(pL->phead);
				pL->phead=pL->ptail=NULL;
			}
			else if(pL->phead==temp)
			{
				pL->phead=pL->phead->pnext;
				free(pL->phead->pprev);
				pL->phead->pprev=NULL;
			}
			else if(pL->ptail==temp)//@head
			{
				pL->ptail=pL->ptail->pprev;
				free(pL->ptail->pnext);
				pL->ptail->pprev->pnext=NULL;
			}
			else //@mid
			{
				temp->pprev->pnext=temp->pnext;
				temp->pnext->pprev=temp->pprev;
			}
			pL->listSize--;
			}
	}
}
ErrorState list_print(const list_t *pL)
{	//list is empty 
	bool_t state;
	list_IsEmpty(pL, &state);
	if(state==TRUE) printf("List is empty:");
	else{
		//list is not empty 
	listNode_t *temp;
	printf("ascending:\n");
	for(temp=pL->phead;temp!=NULL;temp=temp->pnext)
	{
		printf("element = %d\n",temp->data);
	}
	printf("descending:\n");
	for(temp=pL->ptail;temp!=NULL;temp=temp->pprev)
	{
		printf("element = %d\n",temp->data);
	}
	}
}
ErrorState list_listSize(const list_t *pL, u32 *pSize)
{
	*pSize=pL->listSize;
}
ErrorState list_freelist(list_t *pL)
{
	//loop on all nodes and free them 
	listNode_t *temp=pL->phead;
	while(pL->phead!=NULL)
	{
		temp=pL->phead;
		pL->phead=pL->phead->pnext;
        free(temp);
	}
	pL->ptail=NULL;
	pL->listSize=0;
}
ErrorState list_searchNode(const list_t *pL,listEntry e,listNode_t**ppNode)
{
	bool_t state;
	list_IsEmpty(pL, &state);
	if(state==TRUE) {printf("List is empty!/n"); *ppNode=NULL;}
	else{
	listNode_t *temp=pL->phead;
	while(temp!=NULL && temp->data !=e)//1-list ends, 2- or there's an element smaller than the data  entered----> those break the loop
		{
			temp=temp->pnext;
		}
		*ppNode= temp;
	}
}
static ErrorState list_IsEmpty(const list_t *pL,bool_t *pstate)
{
	//if(pL->listSize==0)
		//or 
	if(pL->phead==NULL) *pstate=TRUE;
	else *pstate =FALSE;
}