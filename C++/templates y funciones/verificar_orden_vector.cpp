/*Ejercicio 12: funcion que diga si EL VECTOR ESTA ORDENADO CRECIENTEMENTE*/
#include<iostream>

void pedirDatos();
void comprobarOrdenamiento(int vec[], int);

int vec[100], tam;

int main()
{
	pedirDatos();
	comprobarOrdenamiento(vec, tam);

	return 0;
}

void pedirDatos()
{
	std::cout << "Digite el numero de elementos del vector: ";
	std::cin >> tam;

	for(int i = 0; i < tam; i++)
	{
		std::cout << i + 1 << ". Digite un numero: ";
		std::cin >> vec[i];
	}
}

void comprobarOrdenamiento(int vec[], int tam)
{
	char band = 'F';
	//1 2 3 4 5
	int i = 0;
	while((band == 'F') && (i < tam-1))
	{
		if(vec[i] > vec[i+1])
			band = 'V';

		i++;
	}

	if(band == 'F')
		std::cout << "\nEl arreglo esta ordenado en forma creciente";

	else
		std::cout << "\nEl arreglo NO esta ordenado";
}

/*----------------------OTRA SOLUCION----------------------*/

void Comprobacion(int vec[], int);

/*int main()
{
	pedirDatos();
 	Comprobacion(vec, tam);

 	return 0;
}*/

void Comprobacion(int vec[], int tam)
{
	int aux = 1;

 	for(int i = 1; i < tam; i++)
	{
  		if(vec[i] >= vec[i-1])
   			aux += 1;
}
	if(aux == tam)
  		std::cout << "\nEl arreglo esta ordenado crecientemente." << '\n';

 	else
  		std::cout << "\nEl arreglo NO esta ordenado crecientemente." << '\n';
}