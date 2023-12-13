//detecta si la entrada en una vocal minuscula
#include <iostream>
using namespace std;
int main(){
    char letra;

    cout<<"Escriba una vocal: "; cin>>letra;

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<letra<<" Es una vocal minuscula"; break;
        default: cout<<"No es un vocal minuscula";
    }

    return 0;
}