#include <iostream>
#include <stdlib.h>//es necesaria para generar el numero aleatorio, si no da error en srand()
#include <time.h> /*Esta libreria permite usar la funcion time()*/

int main()
{
    int num, entrada, intentos = 0;
    char continuar;

    srand(time(NULL));/* inicializa los numeros aleatorios para que cada vez
    que se ejecute el programa sea un numero aleatorio diferente*/

/*Ajustar el rango del num aleatorio:  variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
por ejemplo Numero aleatorios entre 250 y 420: num=250+rand()%(421-250);*/
    num = 1 + rand()%100;

    std::cout << "\n----------------------Este es un juego de adivinar el numero entre 1 y 100----------------------\n";
//    std::cout<<num; //se inmprime el numero aleatorio para verificar el programa, esto se puede evitar si se usa in debugger
    do {
        std::cout << "\nEscriba el numero: "; std::cin >> entrada;
        if (num<entrada)
            std::cout << "\nEL NUMERO ES MENOR\n";
        
        /*no se puede usar un else porque en caso de que num==entrada imprime la linea "numero mayor" y luego cierra el bucle*/
        if (num>entrada)
            std::cout << "\nEL NUMERO ES MAYOR\n";
        
        intentos++;
    } while(num != entrada);

    std::cout << "\n----------------------ADIVINO EL NUMERO----------------------\n";
    std::cout << "Numero de intentos: " << intentos << '\n';

    do {
        std::cout << "\nDesea continuar? y=Si n=NO "; std::cin >> continuar;

        if (continuar =='n'||continuar =='N')
            break;
        
        while (continuar =='y'||continuar =='Y') 
        {
            srand(time(NULL));
            num = 1 + rand()%100;
            intentos = 0;
//            cout<<num; //se inmprime el numero aleatorio para verificar el programa
            do {
                std::cout << "\nEscriba el numero: "; std::cin >> entrada;
                if (num<entrada)
                    std::cout << "\nEL NUMERO ES MENOR\n";
                
                if (num>entrada)
                    std::cout << "\nEL NUMERO ES MAYOR\n";
                
                intentos++;
            } while(num!=entrada);
            std::cout << "\n----------------------ADIVINO EL NUMERO----------------------\n";
            std::cout << "Numero de intentos: " << intentos << '\n';
            std::cout << "\nDesea continuar? y=Si n=NO "; std::cin >> continuar;
        }
    } while (continuar != 'n' && continuar != 'y' && continuar != 'N' && continuar != 'Y');

    return 0;
}
