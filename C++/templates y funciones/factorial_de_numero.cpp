/*Factorial de un numero con funciones recursivas, las que se llaman a ellas mismas
y tienen un caso base*/
#include<iostream>

int factorial(int);
int n;

int main()
{
	std::cout << "\n---------------Factorial de un numero---------------\n";

	std::cout << "\nIngrese el numero: ";
	std::cin >> n;
	std::cout << "\nEl resultado es: " << factorial(n) << '\n';
 	return 0;
}

int factorial(int n)
{
	if (n==0) {/*caso base de la funcion recursiva*/
		n=1;
	}
	else{
		n = n *factorial(n-1);
	}
	return n;
}