/*Recorrer un vector con punteros*/
#include<iostream>

int main()
{
	std::cout<< "\n---------------imprime un vector con punteros---------------\n";

	int numeros[] = {1,2,3,4,5};
	int *dir_numeros;
	dir_numeros = numeros;

	for (int i = 0; i < 5; i++) {
		std::cout<< "\nElemento del vector["<<i<<"]: "<<*dir_numeros++<< '\n';
		/*con el "++" en el puntero se pueden imprimir todos los elementos del vector*/
	}
 	return 0;
}