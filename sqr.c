#include <stdio.h>

int square(int y);//function proto

void main ()
{
int x = 0;

for(x=1;x<=10;x++)
  { 
	printf("%d",square(x));//function call
	printf(" ");
  }
printf("\n");

}
//square function definiton returns the square of its parameter
int square(int y)// y is a copy of the argument to the function 
{  
  return y * y;//returns the square of y as int
}
