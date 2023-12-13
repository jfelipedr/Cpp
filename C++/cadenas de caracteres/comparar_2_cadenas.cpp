/*Comprar dos cadenas ingresadas por el usuario*/
/*Como las cadenas tambien puede ALMACENAR NUMEROS se puede compara que numero es mayor o igual a otro
con la funcion strcmp()*/
#include <iostream>
#include <string.h>

int main(){
    char cadena1[100];
    char cadena2[100];

    std::cout << "\nDigite una palabra: ";
    std::cin.getline(cadena1,100,'\n');
    std::cout << "\nDigite otra palabra: ";
    std::cin.getline(cadena2,100,'\n');

    if(strcmp(cadena1,cadena2) == 0)
        std::cout << "Las palabras son iguales.";
    
    if(strcmp(cadena1,cadena2)>0)
        std::cout << "La palabra " << cadena1 << " es mayor que: " << cadena2 << "\n";
    
    if(strcmp(cadena1,cadena2)<0)
        std::cout << "La palabra " << cadena2 << " es mayor que: " << cadena1 << "\n";
    
 return 0;
}