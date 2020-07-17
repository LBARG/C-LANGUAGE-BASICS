#include <stdio.h>

int isPrime(int n,int divisor);

int main (void)
{
	int num = 0;
	printf("Ingrese un número entero: ");
	scanf("%d",&num);
	int div = num/2;
	if(isPrime(num,div) == 1)
	{
		printf("El numero %d es primo\n", num);
	}
	else
	{
		printf("El numero %d no es primo\n", num);
	}

	return -1;
}

int isPrime( int n,int divisor)
{
	if(divisor == 1)
	{
		return 1;
	}
	else if ((n%divisor)==0)
	{
		return 0;
	}
	else
	{
		isPrime(n,divisor-1);
	}

}
