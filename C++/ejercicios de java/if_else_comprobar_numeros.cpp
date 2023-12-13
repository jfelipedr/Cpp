//Ejemplo de if y else if para comparar dos numeros
#include <iostream>
using namespace std;
int main(){
    int a, b;

    cout<<"Escriba dos numeros: ";
	cin>>a>>b; /*se pueden ingresar las dos variables separadas por un espacio
	si no el programa va a almacenar la primera entrada y esperar a la segunda*/

	if (a==b) {
		cout<<"Son el mismo numero";

	} else if (a<b) {
		cout<<b<<" es el numero mayor";

	} else {
		cout<<a<<" es el numero mayor";
	}

	return 0;
}