#include <stdio.h>
#include <stdbool.h>
#include "STD_TYPES.h"

bool checkZeroOnes(u8 *s);

void main(void)
{
	u8 binaryString[] = "100111";
	bool res = checkZeroOnes(binaryString);
	printf("\n");
	if(res)
		printf("true");
	else
		printf("false");
}
bool checkZeroOnes(u8 *s)
{
	u32 i=0;
	u32 max_ones = 0, max_zeros = 0;
	u32 curr_ones = 0, curr_zeros = 0;
	while (s[i] != '\0')
	{
		if(s[i] == '1') 
		{
			curr_ones++;
			curr_zeros = 0;
			if(curr_ones > max_ones)
				max_ones = curr_ones;
		}
		else if(s[i] == '0') 
		{
			curr_zeros++;
			curr_ones = 0;
			if(curr_zeros > max_zeros)
				max_zeros = curr_zeros;
		}
		++i;
	}
	return max_ones > max_zeros;
}