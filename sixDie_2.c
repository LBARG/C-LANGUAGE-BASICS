#include <stdio.h>
#include <stdlib.h>

void main ()
{
	unsigned int freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0;
	unsigned int roll = 0;

	for(roll = 1; roll<=60000000;roll++)
	{
		int face = 1+ rand()%6;
		switch(face)
		{
			case 1:
				freq1++;
				break;
			case 2:
				freq2++;
				break;
			case 3:
				freq3++;
				break;
			case 4:
				freq4++;
				break;
			case 5:
				freq5++;
				break;
			case 6:
				freq6++;
				break;
		}
	}

	printf("%s%13s\n", "Face", "Frequency");
	printf("   1%13u\n", freq1);
	printf("   2%13u\n", freq2);
	printf("   3%13u\n", freq3);
	printf("   4%13u\n", freq4);
	printf("   5%13u\n", freq5);
	printf("   6%13u\n", freq6);
}
