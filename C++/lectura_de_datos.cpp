//lectura y entrada de datos

#include<iostream>

using namespace std; 	//con esta linea no es necesario poner "std::cout" para imprimir en pantalla,
						//aunque no es una practica recomendada

int main()
{
	char entrada[2];// el "[2]" indica el numero de caracteres que guarda la "variable" entrada
	string cadena;//string guarda una cadena de texto

	cout << "Digite un caracter: ";
	cin >> entrada; //con esta linea pedimos el caracter para que se guarde en "entrada"

	cout << "Digite una palabra: "; cin >> cadena;

	cout << "\nEl caracter que escribio es: " << entrada;
	cout << "\nLa palabra que escribio es: " << cadena;

	return 0;
}
