#include <stdio.h>

void main()
{
	int i,number,quantity;
	float price,total,totalRetail=0;
	for(i=0;i<5;++i)
	{
		printf("Enter product number: ");
		scanf("%d",&number);
		printf("Enter Quantity sold: ");
		scanf("%d",&quantity);
		switch(number)
		{
			case 1:
			price = 2.98;
			total = quantity * price;
			break;
			case 2:
			price = 4.50;
			total = quantity * price;
			break;
			case 3:
			price = 9.98;
			total = quantity * price;
			break;
			case 4:
			price = 4.49;
			total = quantity * price;
			break;
			case 5:
			price = 6.87;
			total = quantity * price;
			break;
		}
		totalRetail += total;
		
	}
	
	printf("Total Retail = %0.3f",totalRetail);
}