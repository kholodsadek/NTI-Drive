#include <stdio.h>

int main()
{
	int id;
	printf("Please Enter Your ID: ");
	scanf("%d",&id);
	switch(id)
	{
		case 1122: printf("Hello Fahd");
		break;
		case 1245: printf("Hello Ali");
		break;
		case 7896: printf("Hello Yasmin");
		break;
		case 9110: printf("Hello Ahmed");
		break;
		case 5566: printf("Hello Sarah");
		break;
		case 8687: printf("Hello Amr");
		break;
		default: printf("Wrong ID");
		break;
	}
}