#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
		 
int vector[100];
int i,n, may, men, r, s = 0;
float prom;

printf("Cuantos numeros desea: \n");
scanf("%i",&n);

	if (n>0)
{
 
	for (i=0; i<n; i++)
{
   			printf( "Ingrese el numero %i\n", i+1);
   			scanf("%d", &vector[i]);
}

may = vector[0]; 
men = vector[0];
 
	for (i=0; i<n; i++) 
	{
    	if (vector[i]> may){
    		may=vector[i];
    }
    if (vector[i]< men){
    	men=vector[i];
    }
}
	printf("El mayor es %d\n", may); 
	printf("El menor es %d\n", men);
 
r = may - men;
	printf ("El rango es: %d" ,r);

	for(i=0; i<n; i++) 
	{
		s = s + vector[i];
	}
prom = s
 / n;
	printf ("\nEl promedio es: %g\n", prom);
	} 
	else 
	printf ("Un vector no acepta valores negativos");
return 0; 
}
