/*Funcion strcpy() para copiar una cadena*/
#include <iostream>
#include <string.h>//libreria para cadena de caracteres

int main()
{
    char origin[] = "hello";
    char destiny[10];

    strcpy(destiny, origin);/*se ingresa la palabra de destino y despues la de origen*/

    std::cout << origin << " & " << destiny;

    return 0;
}