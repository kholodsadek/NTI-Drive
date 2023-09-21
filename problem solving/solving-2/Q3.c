#include <stdio.h>
#include <string.h>
#include "STD_TYPES.h"


u32 romanTolnt(u8 *s);

void main(void)
{
	u8 roman_numeral[10];
	printf("s = ");
	gets(roman_numeral);
	u32 integer_value = romanTolnt(roman_numeral);
	printf("The integer value of %s is %d",roman_numeral,integer_value);
}

u32 romanTolnt(u8 *s)
{
	u32 i,value;
	u32 roman_to_int[256] = {['I'] = 1, ['V'] = 5, ['X'] = 10, ['L'] = 50, ['C'] = 100, ['D'] = 500, ['M'] = 1000};
	
	u32 result = 0;
	u32 prev_value = 0;
	
	for(i =0;s[i] != '\0';i++){
		value = roman_to_int[s[i]];
		if(value > prev_value){
			result += value - 2 * prev_value;
		} else {
			result += value;
		}
		prev_value = value;
	}
	return result;
}