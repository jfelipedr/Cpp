/*Contar caracteres en una frase */
#include <iostream>
#include <string.h>//contiene las funciones atoi() y atof()

int main()
{
    char frase[30];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    std::cout << "\n---------------Programa para contar vocales en una frase---------------\n";

    std::cout << "\nEscriba una frase: ";
    std::cin.getline(frase,30,'\n');

//bucle para recorrer toda la cadena
    for (int i = 0; i < 30; i++) 
    {
        switch (frase[i]) 
        {
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;
        }
    }
    std::cout << " Vocal a: " << vocal_a << '\n';
    std::cout << " Vocal e: " << vocal_e << '\n';
    std::cout << " Vocal i: " << vocal_i << '\n';
    std::cout << " Vocal o: " << vocal_o << '\n';
    std::cout << " Vocal u: " << vocal_u << '\n';

	return 0;
}