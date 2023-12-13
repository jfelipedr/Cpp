/*Metodo burbuja:
es la mas facil pero el que mas tiempo toma, revisa cada elemento comparandolo
con el siguiente en el array ordenandolo hasta que no se deba volver a modificar la lista*/
#include <iostream>
using namespace std;
int main(){
    int num[]={8,5,4,9,3,6,1,0,2,7};
    int aux;

    cout<<"\n---------------Programa para ordenar un array de enteros por metodo burbuja---------------\n";

//bucle ordenamiento metodo burbuja
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (num[j]>num[j+1]) {
                aux=num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
        }
    }

    cout<<"\n Orden ascendente: "<<endl<<endl;
    for (int i = 0; i < 10; i++) {
        cout<<" "<<num[i];
    }

    cout<<"\n\n Orden descendente: "<<endl<<endl;
    for (int i = 9; i >=0; i--) {
        cout<<" "<<num[i];
    }

	return 0;
}