//programa de intercambio de valor de variables
#include <iostream>

int main()
{
	int x,y,aux; //aux sera la variable auxiliar para realizar el cambio de valores

	std::cout << "Digite el valor de x: "; std::cin >> x;
	std::cout << "Digite el valor de y: "; std::cin >> y;

	aux = x;
	x = y;
	y = aux;

	std::cout << "\nEl valor final de x es: " << x << '\n';
	std::cout << "\nEl valor final de y es: " << y << '\n';

	return 0;
}