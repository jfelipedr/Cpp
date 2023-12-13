/*Funcion strcat() para concatenar cadenas (sumar)*/
#include<iostream>
#include<string.h>

int main()
{
    char cadena1[] = "Hello";
    char cadena2[] = " world";
    char cadena3[30];

/*strcat() añade al final del primer elemento el contenido del seguno*/

/*aqui se esta copiando el contenido de cadena1 a la cadena3*/
    strcpy (cadena3,cadena1);
    /*Aqui se añade la cadena 2 al final de la cadena 3*/
    strcat(cadena3,cadena2);

    std::cout << "\n" << cadena3 << "\n";

 return 0;
}