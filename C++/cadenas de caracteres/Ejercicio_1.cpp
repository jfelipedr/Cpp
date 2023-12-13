/*Definir una cadena, y pedir su entrada*/
#include <iostream>
#include <string.h>//libreria para cadena de caracteres

int main()
{
    char word[] = "MyName";
    char word1[] = {'M', 'y', 'n', 'a', 'm', 'e'};

    std::cout << word << '\n';
    std::cout << word1 << '\n';

    char name[5], name1[5], name2[10];
/*Si se usa gets() se puede almacenar texto incluyendo lo espacios en blanco pero esta funcion tiene la desventaja
de tomar espacio de memoria pra guardar las cadenas en caso de que la entrada supere el tamaño asignado*/
    std::cout << "Write your name: (gets())" << '\n';
    gets(name1);
    std::cout << name1 << '\n';

    /*Esta es de las mejores formas para guardar cadenas, ya que guarda espacios en blanco pero no excede el tamaño asignado
    de las variables*/
    std::cout << "Write your name: (cin.getline())" << '\n';
    std::cin.getline(name2, 20, '\n');/*primero se indica la variable, luego el tamaño, opcionalmente cuando termiar de leer la entrada
    en este caso cuando halla un salto de linea*/
    std::cout << name2 << '\n';
    /*Se debe tener cuidado ya que al ingresar una cadena de mayor tamaño pasara a ser almacenada en la siguiente linea si se usa un cin>>;*/

/*Si se usa cin>>; para guardar cadenas de caracteres se debe tener en cuenta que si el usuario ingresa
un espcio vaio " " se cortara la entrada*/
    std::cout << "Write your name (cin>>;): " << '\n';
    std::cin >> name;
    std::cout << name << '\n';


    return 0;
}