/*Funcion strlen() para obtener la longitud de una cadena*/
#include <iostream>
#include <string.h>//libreria para cadena de caracteres

int main()
{
    char word[] = "hello";
    int length = 0;/*La funcion strlen() devuelve un numero entero por eso es necesario esta variable*/

    length = strlen(word);// dentro de la funcion esta la variable que se quiere analizar
    std::cout << "Numero de elementos de la cadena: " << length;

    return 0;
}