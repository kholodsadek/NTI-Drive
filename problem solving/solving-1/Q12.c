#include <stdio.h>

void main()
{
	int i,c=0,binary[8];
	printf("Enter a binary number: ");
	for(i=0;i<8;++i) // 0000 1110
	{
		scanf("%d",&binary[i]);
		if(binary[i] == 1)
			++c; //3
	}
	printf("%d",c);
}