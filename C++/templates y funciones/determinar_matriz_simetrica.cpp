/*Determinar si una matriz es simetrica, es decir tiene que ser una matriz cuadrada matriz[n][n]
y su transpuesta es igual a la original ejemplo:
/8 1 3/       /8 1 3/
/1 7 4/  -->  /1 7 4/
/3 4 9/       /3 4 9/  */
#include<iostream>

void pedir_datos();

void comprobar_simetria(int matriz[][50], int, int);

int matriz[50][50], filas, columnas;

int main()
{
	std::cout << "\n---------------Comprobar la simetria de una matriz---------------\n";

	pedir_datos();
	comprobar_simetria(matriz, filas, columnas);

 	return 0;
}

void pedir_datos()
{
	std::cout << "\nIngrese el numero de filas: ";
	std::cin >> filas;
    std::cout << "\nIngrese el numero de columnas: ";
	std::cin >> columnas;

 	for(int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++) 
		{
			std::cout << "Digite un numero: [" << i << "][" << j << "]: ";
			std::cin >> matriz[i][j];
		}
 	}
}

void comprobar_simetria(int matriz[][50], int filas, int columnas)
{
	int contador = 0;

	if (filas == columnas) 
	{
		for(int i = 0; i < filas; i++) 
		{
			for(int j = 0; j  < columnas; j++) 
			{
				if (matriz[i][j] == matriz[j][i])
					contador ++;
			}
		}
	}

	if (contador == filas*columnas)
		std::cout << "\n---------La matriz es simetrica---------\n";
	
	else
		std::cout << "\n---------La matriz NO es simetrica---------\n";
}