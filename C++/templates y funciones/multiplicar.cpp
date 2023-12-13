/*Funcion que multiplica dos numeros para multiplicar*/
#include <iostream>

void pedir_datos();
void multiplicar(float x, float y);/*se usa void porque no es necesario que retorne un valor,
									solo que lo despliege, o sea la misma funcino lo imprime*/

float num1, num2;

int main()
{
	pedir_datos();
	multiplicar(num1, num2);

	return 0;
}

void pedir_datos()
{
	std::cout << "Digite 2 numeros: ";
	std::cin >> num1 >> num2;
}

void multiplicar(float x, float y)
{
	float resultado = x*y;
	std::cout << "La multiplicacion es: " << resultado << endl;
}
