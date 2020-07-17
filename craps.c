#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Stat{CONTINUE,WON,LOST};

int rollDice(void);

void main ()
{
	srand(time(NULL));
	int myPoint;
	enum Stat gameStat;
	int sum = rollDice();

	switch(sum)
	{
		case 7:
		case 11:
			gameStat = WON;
			break;
		case 2:
		case 3:
		case 12:
			gameStat = LOST;
			break;
		default:
			gameStat = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;
	}

	while(CONTINUE == gameStat)
	{
		sum = rollDice();

		if(sum == myPoint)
		{
			gameStat=WON;
		}
		else
		{
			if (7 == sum)
			{
				gameStat = LOST;
			}
		}
	}
	if (WON == gameStat)
	{
		printf("%s","Player Wins\n");
	}
	else
	{
		printf("%s","Player Loses\n");
	}
}

int rollDice(void)
{
	int die1 = 1 + (rand()%6);
	int die2 = 1 + (rand()%6);

	printf("Player has rolled %d + %d = %d\n", die1, die2, die1+die2);
	return die1 + die2;
}
