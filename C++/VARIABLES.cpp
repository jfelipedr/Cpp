#include <iostream>// si no se usara cout tambien se puede usar stdio.h

int	main ()
{
	/*enteros se almacenan en 32bits solo hasta el valor 2147483647 lo que corresonde a (2^32)/2 -1porque cuenta el 0
	y tambien almacena los numeros negativos*/
	int x;

	//creo que los decimales o flotantes se almacenan en 64bits 2^32
	float y;

	//y los double se peden guardar valores tipo float en 128bit, usando variables tipo double o sea 2^128
	double z;

	//variables de caracter, solo un caractar no una cadena de texto
	char w;

	//variable booleana solo es true o false
	bool s;

	x = 4;
	y = 12.3;
	z = 515894613460.13541;
	w = 'A';
	s = true;

	// el \n se usa para salto de linea
	printf ("valor de x: %i.\n", x); //el %i es porque es variable de tipo int

	printf ("valor de y: %f.\n", y); // %f porque es variable tipo float

	printf ("valor de z: %f.\n", z); //aunque la variable es double para guardar en 64bits sigue siendo tipo float

	printf ("valor de z: %c.\n", w); // %c por ser tipo char

	std::cout << "\nTamaño de variables \"int\" en BYTES: " << sizeof(int);
	std::cout << "\nvalor minimo de int: " << INT_MIN << '\n';
	std::cout << "\nvalor maximo de int: " << INT_MAX << '\n';

	std::cout << "\nsize of bool: " << sizeof(bool) <<'\n';
	std::cout << "\nsize of char: " << sizeof(char) <<'\n';
	std::cout << "\nsize of float: " << sizeof(float) <<'\n';
	std::cout << "\nsize of double: " << sizeof(double) <<'\n';

	return 0;
}
