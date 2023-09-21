#include <stdio.h>


#define PRINT() printf("Hello World\n");

void main()
{
	//case 1  ==> using if statement
	if(printf("Hello World\n")){
	}
	//case 2  ==> using switch case
	switch(printf("Hello World\n")){
		case 0:
			break;
	}
	//case 3  ==> using loops(while)
	while(!printf("Hello World\n")){
	}
	//case 3  ==> using loops(For)
	for(; !printf("Hello World\n");){
	}
	//case 4  ==> using macros
	PRINT()
}

