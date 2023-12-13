//Crear un vector  para luego ingresar sus datos
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int x, num[x];

    cout<<"\nCuantos elementos va a tener su arreglo?\n"; cin>>x;
    cout<<"\nA continuacion ingrese el numero teniendo en cuenta el orden.\n"<<endl;

    for (int i=0; i<x; i++) {
        cout<<"Ingrese el numero:";
        cin>>num[i]; //se guardan los elementos del vector
    }
    cout<<"\nIndice"<<" -> "<<"Valor\n"<<endl;

    for (int i=0; i<x; i++) {
        cout<<i<<" -> "<<num[i]<<'\n';
    }
    cout<<endl;
    system("pause");
	return 0;
}