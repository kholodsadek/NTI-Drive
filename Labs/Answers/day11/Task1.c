#include <stdio.h>
#include <stdlib.h> // dynamic memory allocation library 
#include "STD_TYPES.h"

u32 risingEdgeCounter(u8  PinReading);

void main(void)
{
	u32 count ,i,size;
	u8 arr[] = {0,1,0,0,0,1,1,1,0,1,0,0};
	size = (sizeof(arr)/sizeof(arr[0]));
	for(i=0;i<size;i++)
	{
		count = risingEdgeCounter(arr[i]); // 0 // 1 // 1 // 1 // 1 // 2 // 3 // 4 // 4 // 5 // 5 // 5
	}
	printf("Number of Rising Edges = %d\n",count); //5
}

u32 risingEdgeCounter(u8  PinReading)
{
	static u8 count =0;
	static u8 prevois_state = 1;
	if(PinReading==1&&prevois_state==0) //F // T // F // F // F // T // T // T // F // T // F // F
		count++; // 0 // 1 // 1 // 1 // 1 // 2 // 3 // 4 // 4 // 5 // 5 // 5
	else
		prevois_state = PinReading; // 0 
	return count;
}