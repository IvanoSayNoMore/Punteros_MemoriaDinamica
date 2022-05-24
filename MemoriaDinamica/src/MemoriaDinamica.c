/*
 ============================================================================
 Name        : MemoriaDinamica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int initArray(int pArray[], int limite,int  valor)
{
	int retorno=-1;
	if(pArray != NULL && limite > 0)
	{
		retorno = 0;
		for(int i = 0; i<limite;i++)
		{
			//*(pArray+i)=valor; /Si en la declaracion de la funcion = int* pArray,****
			pArray[i]=valor;//Si en la declaracion de la funcion = int pArray[],****
		}
	}
	return retorno;
}

int printArray(int pArray[], int limite)
{
	int retorno=-1;
	if(pArray != NULL && limite > 0)
	{
		retorno = 0;
		for(int i = 0; i<limite;i++)
		{
			printf("%d\n",pArray[i]);//Si en la declaracion de la funcion = int pArray[],****
			//printf("%d\n",*(pArray+i));/Si en la declaracion de la funcion = int* pArray,****
		}
	}
	return retorno;
}
int main(void) {

	int * pArrayEdades = NULL;
	int sizeArrayEdades = 10;
	int* pArrayTemp = NULL;
	pArrayEdades = (int*) malloc (sizeof(int) * sizeArrayEdades);

	if(pArrayEdades != NULL)
	{
		if(initArray(pArrayEdades, sizeArrayEdades, 0)==0)
		{
			puts("init ok \	n");
			printArray(pArrayEdades, sizeArrayEdades);
		}

		pArrayTemp = (int*) realloc (pArrayEdades,sizeof(int) * (sizeArrayEdades+50));
		if(pArrayTemp != NULL)
		{
			sizeArrayEdades = sizeArrayEdades+50;
			pArrayEdades=pArrayTemp;
		}
	}


	return EXIT_SUCCESS;
}
