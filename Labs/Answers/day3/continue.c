#include <stdio.h>

void main()
{
	int i;
	//Methode 1
	/*for(i=1;i<=20;i++)
	{
		if((i%5)==0)continue;
		
		printf("%d ",i);
	}*/
	//Methode 2
	for(i=1;i<=20;i++)
	{
		if((i%5)==0){
		}
		else{
			printf("%d ",i);
		}
	}
}