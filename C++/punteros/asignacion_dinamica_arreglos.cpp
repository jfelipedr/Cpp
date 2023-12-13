/*Asignacion dinamica de arreglos
si creamos un vector de 10 elementos pero solo llenamos 5 de esos tenemos espacio en memoria que se
esta desperdiciando por eso se creamos arreglos dinamicos
pra esto se usan 2 operadores:
new: reserva el espacio de memoria requerido cuando hacemos la declaracion
delete: liberar el espacio de memoria usado con el "new" */
#include<iostream>
#include <stdlib.h>/*libreria para new y delete*/

void pedir_notas();
void mostrar_notas();

int num_calif, *calif;

int main()
{
	std::cout<< "\n---------------Asignacion dinamica de arreglos---------------\n";
	pedir_notas();
	mostrar_notas();

	delete[] calif;/*liberar el espacio de memoria, se usan "[]" porque se creo un vector*/
 	return 0;
}

void pedir_notas(){
	std::cout<< "\nIngrese el numero de calificaciones:";
	std::cin>> num_calif;

	calif= new int[num_calif];/*crear el arreglo con el espacio reservado y pasando el valor inicial
								al puntero "calif" */

	for (int i = 0; i < num_calif; i++)
	{
		std::cout<< "\nIngrese una nota: ";
		std::cin>> calif[i];
	}
}

void mostrar_notas()
{
	std::cout<< "\nNotas del usuario:\n";
	for (int i = 0; i < num_calif; i++) {
		std::cout<< calif[i]<< '\n';
	}
}