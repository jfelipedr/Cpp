//busqueda Secuencial para caracteres
#include <iostream>

int main()
{
	char a[] = {'a','i','u','e','o'}, dato;
	int i;
	bool band = false;
	dato = 'e';
	//Busqueda Secuencial
	i=0;
	while((band == false) && (i<5))
	{
		if(a[i] == dato)
			band = true;
		i++;
	}

	if(band == false)
		std::cout << "El dato a buscar no existe en el arreglo" << "\n";

	else if(band == true)
		std::cout << "El dato a sido encontrado en la pos: " << i-1 << "\n";
	
	return 0;
}