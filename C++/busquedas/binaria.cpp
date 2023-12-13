 /*Busqueda binaria:
 Para emplear esta busqueda el arreglo debe estar ordenado de manera ascendente,
 esto permite que sea mas eficiente la busqueda*/
 #include <iostream>

 int main()
 {
 	int numeros[] = {1, 2, 3, 4, 5};
 	int inf, sup, mitad, dato, i;
 	char band = 'F';

 	dato = 4;

 	//Algoritmo de la Busqueda Binaria
 	inf = 0;
 	sup = 5;
 	i = 0;
 	while( (inf <= sup) && (i<5) )
	{
 		mitad = (inf+sup)/2;
 		if(numeros[mitad] == dato)
		{
 			band='V';
 			break;
 		}
 		if(numeros[mitad] > dato)
		{
 			sup = mitad;
 			mitad = (inf+sup)/2;
 		}
 		if(numeros[mitad] < dato)
		{
 			inf = mitad;
 			mitad = (inf+sup)/2;
 		}
 		i++;
 	}

 	if(band == 'V')
		std::cout << "El numero se encontro en la pos: " << mitad << "\n";
 	
 	else
 		std::cout << "El numero NO se encontro";
 	
 	return 0;
 }
