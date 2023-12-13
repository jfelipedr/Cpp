/*Punteros y estructuras*/
#include<iostream>

struct persona
{
	char nombre[30];
	int edad;
} per, *puntero_per = &per;

void pedir_datos();
void mostrar_datos(persona *);

int main()
{
	std::cout<< "\n---------------Punteros y estructuras---------------\n";

	pedir_datos();
	mostrar_datos(puntero_per);

 	return 0;
}

void pedir_datos()
{
	std::cout<< "\nDigite su nombre: ";
	/*puntero_per->nombre sintaxis para guardar datos dentro de la estructuras con los punteros*/
	std::cin.getline(puntero_per-> nombre,30,'\n');

	std::cout<< "\nDigite su edad: ";
	std::cin>> puntero_per-> edad;
}
void mostrar_datos(persona *puntero_per)
{
	std::cout<< "\nSu nombre es: "<< puntero_per-> nombre<< endl;
	std::cout<< "Su edad es: "<< puntero_per-> edad<< endl;
}