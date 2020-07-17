#include <stdio.h>

unsigned long long int factorial(unsigned int number);

void main ()
{
	unsigned int i = 0;
	for(i=0;i<=21;i++)
	{
		printf("%u! = %llu\n", i, factorial(i));
	}
}

unsigned long long int factorial(unsigned int number)
{
	if(number <= 1)
	{
		return 1;
	}

	else
	{
		return(number * factorial (number - 1));
	}
}
