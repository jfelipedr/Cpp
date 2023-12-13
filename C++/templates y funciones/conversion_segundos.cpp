/*Ejercicio 9:La funcion es convertir el numero de segundos transmitido en un numero
equivalente de horas, minutos y segundos.*/

#include <iostream>
#include <conio.h>


void tiempo(int, int&, int&, int&);

int main()
{
	int totalSeg, horas, min, seg;

	std::cout << "Digita la cantidad de segundos: ";
	std::cin >> totalSeg;

	tiempo(totalSeg, horas, min, seg);

	std::cout << "\nHoras: " << horas << '\n';
	std::cout << "Minutos: " << min << '\n';
	std::cout << "Segundos: " << seg << '\n';

	getch();
	return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg)
{
	horas = totalSeg/3600;
	totalSeg %= 3600;
	min = totalSeg/60;
	seg = totalSeg%60;
}
