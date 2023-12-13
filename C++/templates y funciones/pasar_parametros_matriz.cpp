/*Pasar parametros a una matriz*/
#include<iostream>

void mostrar_matriz(int matriz[][3], int, int);/*al declarar una matriz como parametro se debe indicar
											el numero de columnas maximas que puede tener*/
void calcular_cuadrado(int matriz[][3], int, int);

void mostrar_matriz_elevada(int matriz[][3], int, int);

int main()
{
	const int filas = 2;
	const int columnas = 3;
	int matriz[filas][columnas] = { {1, 2, 3}, {4, 5, 6} };

	std::cout << "\n---------------Pasar parametros a una matriz---------------\n";

	mostrar_matriz(matriz, filas, columnas);
	calcular_cuadrado(matriz, filas, columnas);
	mostrar_matriz_elevada(matriz, filas, columnas);

 	return 0;
}

void mostrar_matriz(int matriz[][3], int filas, int columnas)
{
	std::cout << "\nMatriz original: \n";

 	for(int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
			std::cout << " " << matriz[i][j] << " ";

		std::cout <<'\n';
 	}
}

void calcular_cuadrado(int matriz[][3], int filas, int columnas)
{
	for(int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++)
			matriz[i][j] *= matriz[i][j];

	}
}

void mostrar_matriz_elevada(int matriz[][3], int filas, int columnas)
{
	std::cout << "\nMatriz elevada al cuadrado\n";

	for(int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++) 
			std::cout << " " << matriz[i][j] << " ";

		std::cout << '\n';
 	}
}