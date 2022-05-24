/*
 ============================================================================
 Name        : Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef int(*tpfSaludar)(char*);

int saludarEsp(char* mensaje)
{
	printf("%s",mensaje);
	return 0;
}

int saludarIngles(char* mensaje)
{
	printf("%s",mensaje);
	return 0;
}

void saludo(char* mensaje, tpfSaludar tSaludar)
{
	tSaludar(mensaje);
}
int main(void) {

	//int (*pFuncSaludar)(char*);
	//pFuncSaludar = saludar;

	saludo("Holas",saludarEsp);
	saludo("\nHello",saludarIngles);
	/*if(!pFuncSaludar("Holis\n"))
	{
		printf("OK");
	}*/
	return EXIT_SUCCESS;
}
