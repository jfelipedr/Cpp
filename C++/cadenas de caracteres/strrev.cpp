/*Funcion strrev() para invertir cadenas, puede ser utilir para comprobar palabras polindromas*/
#include<iostream>
#include<string.h>

int main()
{
    char cadena1[] = "Hello";
    char cadena2[] = "anita lava la tina";
    char cadena3[] = "reconocer";

    strrev(cadena1);
    strrev(cadena2);
    strrev(cadena3);

    std::cout << "\n" << cadena1 << "\n";
    std::cout << "\n" << cadena2 << "\n";
    std::cout << "\n" << cadena3 << "\n";

 return 0;
}