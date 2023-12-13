//programa que verifica si un numero en positivo o negativo
#include <iostream>
using namespace std;
int main(){
    float a;

    cout<<"Escriba un numero: ";
	cin>>a;

	if (a>=0) {
		cout<<"El numero es positivo";

	} else {
        cout<<"El numero es negativo";

	}

	return 0;
}