/*Transformar cadenas a numeros con atoi() y atof() */
#include <iostream>
#include <stdlib.h>//contiene las funciones atoi() y atof()

int main()
{
    /*guarda las cadenas pero solo los numero, i encuentra una letra deja de guardar*/
    char word[] = "314 casi pi", word1[] = "3.141592pi";
    int num;
    float num1;
//atoi() para guardar enteros (int)
    num = atoi(word);

    std::cout << num << "\n";
//atof() para guardar flotantes (float)
    num1=atof(word1);

    std::cout << num1 << "\n";

	return 0;
}