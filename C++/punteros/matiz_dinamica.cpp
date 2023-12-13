/*Matrices dinamicas con punteros
ejemplo: rellenar una matriz nxm e imprimirla

**puntero_matriz --> 	*puntero_fila --> [int] [int] [int]
 						*puntero_fila --> [int] [int] [int]
						*puntero_fila --> [int] [int] [int]

el puntero matriz señala el primer elemento de cada fila de la mnatriz o sea señala
los punteros_fila los cuales señalan toda la fila como si fuera un vector*/
#include<iostream>
#include <stdlib.h>

void pedir_datos();
void mostrar_matriz(int **, int, int);

int **puntero_matriz, nfilas, ncolumnas;/*puntero de punteros para señalar cada fila de la matriz*/

int main(){
	std::cout<< "\n---------------Rellenar una matriz nxm con punteros---------------\n";

	pedir_datos();
	mostrar_matriz(puntero_matriz,nfilas,ncolumnas);

	/*NO olvidar liberar la memoria reservada*/
	for (int i = 0; i < nfilas; i++)
	{
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;

 	return 0;
}

void pedir_datos()
{
	std::cout<< "Digite el numero de filas: ";
	std::cin>> nfilas;
	std::cout<< "Digite el numero de columnas: ";
	std::cin>> ncolumnas;

//reservado memoria para la matriz
	puntero_matriz = new int *[nfilas];/*reservando memoria para las filas*/
	for (int i = 0; i < nfilas; i++)
	{
		puntero_matriz[i] = new int[ncolumnas];/*reservando memoria para las columnas*/
	}
	std::cout<< "\n----------Digitando elementos de la matriz----------\n";
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncolumnas; j++)
		{
			std::cout<< "Digite un numero["<< i <<"]["<< j <<"]: ";
			std::cin>> *(*(puntero_matriz + i) + j);/*esta sintaxis es para guardar los elementos, es equivalente a
											puntero_matriz[i][j]*/
		}
	}
}
void mostrar_matriz(int **puntero_matriz,int nfilas,int ncolumnas)
{
	std::cout << "\nImprimiendo matriz:" << '\n';
	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncolumnas; j++)
		{
			std::cout<< *(*(puntero_matriz+i)+j);
		}
		std::cout<< '\n';
	}
}