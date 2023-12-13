#include <iostream>
#include <stdlib.h>

int main()
{
    std::cout<<'\n'<<"---------------Diferencias entre los bucles FOR, WHILE, y DO WHILE---------------"<<'\n';
//  el texto \t tabula o sea inserta un tab al imprimir el texto
    std::cout<<'\n'<<"FOR:\t\tSe conoce la cantidad de repeticiones, no necesariamente antes de iniciar el programa"<<'\n';
    std::cout<<"\t\tpero se va a repetir 'n' veces."<<'\n';
    /*
    for (tipo_de_variable i = 0; i < count; i++) {
        / code /
    }
    */
    std::cout<<'\n'<<"WHILE:\t\tQueremos parar de repetir, o sea vamos a parar cuando suceda un evento que establecimos."<<'\n';
    /*while (/ condition /) {
        / code /
    }
    */
    std::cout<<'\n'<<"DO WHILE:\tNecesitamos que al menos 1 vez se ejecute una instruccion."<<'\n'<<'\n';
    /*do {
        / code /
    } while(/ condition /);
    */
    system("pause");
	return 0;
}
