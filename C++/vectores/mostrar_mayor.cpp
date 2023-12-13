#include <iostream>
using namespace std;
int main() {
    int x, mayor=0;
    float num[x];

    cout<<"\n-----------------Este programa crea un vector de numeros y le muestra el numero de mayor magnitud-----------------\n";
    cout<<"\nCuantos elementos va a tener su arreglo?\n"<<endl; cin>>x;

    for (int i = 0; i < x; i++) {
        cout<<"Ingrese el elemento '"<<i+1<<"' de su arreglo: ";
        cin>>num[i];

        if (num[i]>mayor) {
            mayor=num[i];
        }
    }
    cout<<"\nEl mayor es: \n"<<mayor<<endl;

    return 0;
}