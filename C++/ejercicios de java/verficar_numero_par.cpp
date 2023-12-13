//ejercicios de java en c++
//verificar que un numero es par
#include <iostream>
using namespace std;
int main(){
    int num;

    cout<<"Escriba un numero: "; cin>>num;

    if (num % 2==0) {
        cout<<num<<" Es numero es par.";
    }
    else {
        cout<<num<<" Es un numero impar";
    }

	return 0;
}