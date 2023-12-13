/*Copiar contenido entre matrices*/
#include<iostream>
using namespace std;

int main() {
    int origen[2][2]={1,2,
                      3,4};
    int copia[2][2];

    cout<<"\n---------------Copiar el contenido de una matriz 2x2 a otra 2x2---------------\n"<<endl;
// Este bucle pasa el contenido de la matriz origen a la copia
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            copia[i][j]=origen[i][j];
        }
    }

    //este bucle Muestra la matriz Copia
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout<<copia[i][j];
        }
        cout<<endl;
    }

    return 0;
}