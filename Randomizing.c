#include <stdio.h>
#include <stdlib.h>

void main()
{
	unsigned int seed, i = 0;
	printf("%s","Enter the seed: ");
	scanf("%u", &seed);

	srand(seed);

	for(i = 1; i<=10; i++)
	{
		printf("%10d", 1+(rand()%6));
		if(i%5==0)
		{
			printf(" ");
		}
	}
	printf("\n");
}
