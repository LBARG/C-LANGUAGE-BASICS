#include <stdio.h>
#include <stdlib.h>


void main()
{
	unsigned int i = 0;

	for(i = 1; i<=20; i++)
	{
		printf("%10d",1+(rand()%6));
			if(i%5==0)
			 {
			 printf(" ");
			 }	
		
	}
	printf("\n");
}
