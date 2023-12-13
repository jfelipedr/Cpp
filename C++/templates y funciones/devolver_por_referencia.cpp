/*Devolver dos valores o mas por medio del paso de parametros por referencia*/
#include <iostream>

/*aqui se estan pasando 2 parametros por valor y otros 2 por referencia*/
void calculate(int, int, int&, int&);

int main()
{
	int num1, num2, suma=0, mult=0;

	std::cout << "Digite 2 numeros: ";
	std::cin >> num1 >> num2;

	calculate(num1, num2, suma, mult);

	std::cout << "El valor de la suma es: " << suma << '\n';
	std::cout << "El valor de la multiplicacion es: " << mult << '\n';

	return 0;
}

/*Es decir que los primeros dos paramatros son una copia del valor de num1 y num2*/
void calculate(int num1, int num2, int& suma, int& mult)
{
	suma = num1 + num2;/*estos son los valores que devuelve*/
	mult = num1 * num2;/*la funcion, ya que lo hace por referencia*/
}
