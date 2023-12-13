#include <iostream>
#include <stdlib.h>

int main()
{
    int num;

    std::cout<< '\n'<< "---------------Este programa calcula las tablas de multiplicar del 1 al 9---------------"<<'\m';

    do {
        std::cout<< '\n'<< "Escriba un numero de 1 a 9: "; std::cin>>num; std::cout<< '\n';
    } while(num<1 || num>9);

    for (int i=1; i<=9; i++) {
        std::cout<< num<< " * "<< i<< " = "<< num*i<< '\n';
    }

    std::cout<<'\n';
    system("pause");
    return 0;
}
