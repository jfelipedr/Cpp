#include <iostream>
#include <conio.h>/*Esta libreria permite usar la funcion getch() para que al abrir el .exe que se crea
tras compilar el .cpp el programa espere que presionesmos una tecla para que se cierre y podamos ver
todas las salidas de nuestro programa*/
#include <stdlib.h> /*esta libreria permite usar system("pause"); funcionando igual que getch() pero
imprime el mensaje "oprima una tecla para continuar" antes de cerrar el programa*/
using namespace std;
int main(){
    int num, unidades, decenas, centenas, millares;

    cout<<"------------ESTE PROGRAMA CONVIERTE NUMEROS A NUMEROS ROMANOS------------"<<endl;

    cout<<endl<<"Ingrese el numero para convetirlo: "<<endl;
    cin>>num;

    unidades = num%10; num /=10;
    decenas = num%10; num /=10;
    centenas = num%10; num /=10;
    millares = num%10;

    switch (millares) {
        case 1: cout<<"M"; break;
        case 2: cout<<"MM"; break;
        case 3: cout<<"MMM"; break;
    }

    switch (centenas) {
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"DC"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCCC"; break;
        case 9: cout<<"CM"; break;
    }

    switch (decenas) {
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break;
    }

    switch (unidades) {
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
    }

    getch();
//  system("pause");
    return 0;
}
