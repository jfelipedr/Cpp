/*Funcion strcmp() para comparar una cadena con otra*/
/*IMPORTANTE el resultado es <0 si Palabra1 va antes que Palabra2 (Alfabéticamente)
el resultado es >0 si Palabra1 va después que Palabra2 (Alfabéticamente)
el resultado es 0 si ambas palabras son iguales
cuando termina el alfabeto en mayúsculas, empieza el alfabeto en minúsculas. o sea una palabra con los mimos caracteres
pero en mayúsculas tendra mayor valor que una en minúsculas
(A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
a b c d e f g h i j k l m n o p q r s t u v w x y z Ñ ñ)
La ñ tiene mayor valor que la z porque no se encuentra en el alfabeto ingles
Cada letra tiene un valor numérico; los valores estan en la tabla ascii; Lo que realmente hace esta funcion es buscar
que numero es mayor o si ambos son iguales, la computadora no sabe distinguir si "a" esta antes que "b" en el alfabeto,
pero si sabe que 97 (valor numerico de "a"), es mas chico que 98 (valor numerico de b),*/
#include <iostream>
#include <string.h>//libreria para cadena de caracteres

int main()
{
    char word1[] = "Hello";
    char word2[] = "Hello";

/*El resultado de strcmp() es 0 si las cadenas son iguales, y es igual a 1 si son distintas*/
    if ( strcmp(word1,word2) ==0 )
        std::cout << "\nSon la misma cadena\n";
    
    else 
        std::cout << "\nSon distintas\n";

    /*Tambien se puede usar strcmp() para comparar cual cadena es mayor alfabeticamente
    o sea su orden alfabetico*/
    char word3[] = "ardilla";
    char word4[] = "zebra";

/*Se esta comparando si la word3 esta despues de word4 alfabeticamente*/
/*strcmp(word3,word4) >0 quiere saber si la primera es MAYOR a la segunda*/
/*strcmp(word3,word4) <0 quiere saber si la primera es MENOR a la segunda*/
    if ( strcmp(word3,word4) > 0 )
        std::cout << '\n' << word3 << " es mayor alfabeticamente que " << word4 << '\n';
    
    else 
        std::cout << '\n' << word4 << " es mayor alfabeticamente que " << word3 << '\n';

    return 0;
}