#include <iostream>

int main()
{
	std::cout<< "\n------------vectores o arrays de una dimension------------\n";
	std::cout<< "\nEs un dato que almacena una secuencia de valores del mismo tipo que el vector\n";
	std::cout<< "\nSe puede acceder al los valores del vector por su indices\n";
	std::cout<< "\nLos vectores siempre comienzan por el indice 0 y terminan en el indice n-1\n";
	std::cout<< "\nPara crear un vector se define el tipo de variables que contiene (int, float, char, ect...)\n";
	std::cout<< "\nluego se define su nombre y por ultimo su tamaño entre corchetes cuadrados[]\n";
	std::cout<< "\nEjemplo: \nchar letra[20]; \neste seria un vector que almacena variables 'char' hasta 20 datos\n";
	char letra[20];
	std::cout<< "\nTambien se puede rellenar un vector en el momento que se crea, por ejemplo\n";
	int	numero[] = {1, 23, 54, 9};
	std::cout<< "int numero[]={1, 23, 54, 9};";

	return 0;
}
