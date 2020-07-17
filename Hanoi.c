#include <stdio.h>

void Hanoi (unsigned int num,unsigned int o, unsigned int d,unsigned int t);

int main (void)
{
unsigned int origin = 1, destiny = 3, temp = 2;
unsigned int numberD;
printf("********************************************\n\n");
printf("********************************************\n\n");
printf("********************************************\n\n");
printf("**************Juego Torres Hanoi************\n\n");
printf("********************************************\n\n");
printf("********************************************\n\n");
printf("********************************************\n\n");
printf("Ingrese el numero de discos de la torre: ");
scanf("%u",&numberD);

Hanoi(numberD,origin,destiny,temp);

}


void Hanoi (unsigned int num,unsigned int o, unsigned int d,unsigned int t)
{
	
	if (num == 1)
	{
		printf("%d -> %d\n", o, d);
	}
	else
	{
		Hanoi(num-1,o,t,d);
		Hanoi(1,o,d,t);
		Hanoi(num-1,t,d,o);
	}


}
