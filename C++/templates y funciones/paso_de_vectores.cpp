/*Paso de parametros de tipo vector*/
#include <iostream>

void cuadrado(int vector[], int);/*se indica que el vector es tipo entero, como es otra funcion
								se puede poner cualquier noombre de vector, el segundo parametro es el tamaño*/
void mostrar(int vector[], int);//funcion para mostrar el vector

int main()
{
	const int size = 5;//const porque el tamaño es constante, nunca va a cambiar
	int vector[size] = {1, 2, 3, 4, 5};

	std::cout << "\n---------------Elevar al cuadrado los elementos de un vector---------------\n\n";

	cuadrado(vector, size);/*al llamar la funcino solo es necesario poner el noombre del vector que
							es el primer parametro, no es necesario ponere los "[]"*/

	mostrar(vector, size);

	return 0;
}

void cuadrado(int vector[], int size){

	for (int i = 0; i < size; i++)
		vector[i] *= vector[i];

}

void mostrar(int vector[], int size){
	for (int i = 0; i < size; i++)
		std::cout << " " << vector[i];

}