/*SUMAR LOS ELEMENTOS DE UN VECTOR*/
#include <iostream>

void pedir_datos();

int vector[100], size;/*variables de tipo global porque la usan la gran mayoria de las funciones, en este caso todas*/

int calcular_suma(int vector[], int);/*como el segundo parametro es n entero, no es necesario poner su nombre
									pero si es necesario indicar que el primer parametro es un vector poniendo
									UN nombre y los "[]"*/

int main()
{
	std::cout << "\n---------------sumar los elementos de un vector e imprimir su resultado---------------\n\n";

	pedir_datos();

	std::cout << "La suma es: " << calcular_suma(vector,size) << '\n';

	return 0;
}

void pedir_datos()
{
	std::cout << "Ingrese el tamaño del vector";
	std::cin >> size;

	for (int i = 0; i < size; i++) {
		std::cout << i+1 << " Ingrese el numero: ";
		std::cin >> vector[i];
	}
}

int calcular_suma(int vector[], int size)
{
	int suma = 0;/*recordar iniciar la variable, si no se pone "0" da un error de sumar 2 veces
				el ultimo elemento*/

	for (int i = 0; i < size; i++)
		suma += vector[i];

	return suma;
}