#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
  int *apartado;
  int size;
  int cuanto_Hay;

}Vector;

int main (void)
{
Vector *v;
*v =(Vector*) malloc(sizeof (Vector)); 

 int n = 0, int i = 0;

	printf("Ingrese un numero entero:\n");
	scanf("%d", &n);
	
	for(i; i<n; i++)
	 {
	 guarda(i,Vector *v);
	 
	 if(guarda(i,Vector *v) == 1) //1 = false
	   {
		imprime(Vector *v);
	   }
	 }	 

	
	return 0;
}



guarda(i, Vector *v)
{
 Vector * nuevo = NULL;
 *nuevo = (Vector *) malloc(sizeof(Vector*2)); 
if(Vector = NULL)
  {
	return 1;
  }
else if(espacioV(&Vector) == 0) //0 = Verdadero
  {
	*(Vector->apartado + Vector->size++) = i;
  }	
else 
  {

  }  

}
