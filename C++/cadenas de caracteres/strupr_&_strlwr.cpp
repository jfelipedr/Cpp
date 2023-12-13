/*Funcion strupr() y strlwr() para pasar de minusculas a mayúsculas y viceversa puede ser util para comprobar la entrada de
un caracter, por ejemplo el condicional del juego de adivinar*/
#include<iostream>
#include<string.h>

int main()
{
    char cadena1[] = "Hello";
    char cadena2[] = "ANITA lava la tina";
    char cadena3[] = "reconocer";

    strupr(cadena1);
    strupr(cadena2);
    strupr(cadena3);

    std::cout << "\n" << cadena1 << "\n";
    std::cout << "\n" << cadena2 << "\n";
    std::cout << "\n" << cadena3 << "\n";

    strlwr(cadena1);
    strlwr(cadena2);
    strlwr(cadena3);

    std::cout << "\n" << cadena1 << "\n";
    std::cout << "\n" << cadena2 << "\n";
    std::cout << "\n" << cadena3 << "\n";

 return 0;
}