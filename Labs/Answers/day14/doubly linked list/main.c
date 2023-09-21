#include <stdio.h>
#include "list.h"
#include "STD_TYPES.h"
#include <stdlib.h>
#define INSERT 1
#define DELETE 2
#define SEARCH 3
#define LISTSIZE 4
#define PRINT 5
#define FREELIST 6
#define EXIT 7 
int main()
{
	u32 choice;
	list_t L1;
    list_Init(&L1);
	listEntry e;
	do{
	printf("=======================\n");
	printf("please Enter Choice: \n");
	printf("=======================\n");
	printf("1-instert\n2-delete\n3-search\n4-List size\n5-print List \n6-free\n7-Exit\n");
	fflush(stdin);
	scanf("%d",&choice);
	switch(choice){
	case INSERT: 
	{printf("insert data:\n");
		fflush(stdin);
		scanf("%d",&e);
	    list_InsertNode(&L1,e);
	break;}
	case SEARCH :{
		listNode_t *psearch;
		printf("enter the ID: \n");
		scanf("%d",&e);
		list_searchNode(&L1,e,&psearch);
		if(psearch==NULL) printf("ID not found\n");
		else 
		printf("the address of the ID is: %d\n",psearch);
	break;}
	case LISTSIZE :
	{
		u32 size;
		list_listSize(&L1,&size);
		printf("the size of the list = %d\n",size);
	break;
	}
	case PRINT :
	{
	list_print(&L1);
	break;
	}
	case FREELIST :
	{
		list_freelist(&L1);
	break;
	}
	case EXIT :
	{
	break;
	}
	default: 
	printf("Wrong Choice !\n");
	}
	}
	while (choice!=7);
}