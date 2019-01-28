#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void mayusculas();
void minusculas();
int main()
{ 
	char op;
	do
	{
	printf("mayusculas (M)\n");
	printf("minusculas (m)\n");
	printf("salir (s)\n");
	printf("por favor seleccione como quiere convertir su cadena\n");
	scanf("%c",&op);
	fflush(stdin);
		switch(op)
		{
			case 's':
				break;
			case 'M':
				mayusculas();
				break;
			case 'm':
				minusculas();
				break;
				
		}
	}
	while(op !='s');
}
void mayusculas()
{
	char cad[100],i,mayus;
	printf("Introduzca la cadena en mayusculas: ");
	gets(cad);
	for (i=0;cad[i]!=0;i++)
	{
		if (cad[i]>='A' && cad[i]<='Z')
		{
			mayus=cad[i]+32;
			printf("%c",mayus);
		}
		else
		{
			printf("%c",cad[i]);
		}
	}
	printf("\n");
	system("pause");
}
void minusculas()
{
	char cad[100],i,mayus;
	printf("Introduzca la cadena en minusculas: ");
	gets(cad);
	for (i=0;cad[i]!=0;i++)
	{
		if (cad[i]>='a' && cad[i]<='z')
		{
			mayus=cad[i]-32;
			printf("%c",mayus);
		}
		else
		{
			printf("%c",cad[i]);
		}
	}
	printf("\n");
	system("pause");
}
