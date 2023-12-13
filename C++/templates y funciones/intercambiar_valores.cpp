/*Ejercicio 7: Intercambiar el valor de 2 variables utilizando paso de par�metros por
referencia.*/
#include<iostream>
#include<conio.h>

void intercambio(int&, int&);

int main()
{
	int num1=10,num2=15;

	std::cout << "El valor almacenado en num1 es: " << num1 << '\n';
	std::cout << "El valor almacenado en num2 es: " << num2 << '\n';

	intercambio(num1,num2);

	std::cout << "Ahora el nuevo valor de num1 es: " << num1 << '\n';
	std::cout << "Ahora el nuevo valor de num2 es: " << num2 << '\n';

	getch();
	return 0;
}

void intercambio(int& num1, int& num2)
{
	int aux;
	//Intercambiamos ambos valores de las variables num1 y num2
	aux = num1;
	num1 = num2;
	num2 = aux;
}
