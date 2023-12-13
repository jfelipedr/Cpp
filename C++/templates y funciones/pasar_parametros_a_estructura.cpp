/*Pasar parametros a una estructura*/
#include<iostream>

struct persona{
	char nombre[20];
	int edad;
}p1;

void pedir_datos();
void mostrar_datos(persona);/*se indica que esta funcion va a usar los datos de tipo persona*/

int main()
{
	std::cout << "\n---------------Pasar parametros a una estructura---------------\n";

	pedir_datos();
	mostrar_datos(p1);

 	return 0;
}

void pedir_datos()
{
	std::cout << "Ingrese su nombre: ";
	cin.getline(p1.nombre,20,'\n');
	std::cout << "Ingrese su edad: ";
	std::cin >> p1.edad;
}

void mostrar_datos(persona p)
{
	std::cout << "\nNombre: " << p.nombre << '\n';
	std::cout << "\nEdad: " << p.edad << '\n';
}