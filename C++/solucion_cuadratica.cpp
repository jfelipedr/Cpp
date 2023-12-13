//este programa despeja el valor de x de una ecuacion cuadratica
#include <iostream>
#include<math.h>//necesario para pow()
using std::cout;
using std::cin;

/*se puede remplazar el "using namespace std;" llamando cada una
de las palabras reservadas de la libreria <iostream>*/

int main(){
	float x1, x2, a, b, c;

	cout << "Este programa despeja X de la funcion \"ax^2 + bx + c\" "<<'\n'; /*para incluir
	comillas dobles en texto impreso se deben usar "\" para indicar las comillas dobles
	de lo contrario se pueden sar comillas simples*/
	cout << "\nIngrese el valor de a: "; cin >> a;
	cout << "\nIngrese el valor de b: "; cin >> b;
	cout << "\nIngrese el valor de c: "; cin >> c;

	/*la funcion pow eleva el la primera variable al valor despues de la coma, por ejemplo:
	pow(x,4) seria x^4*/
	x1= (-b + sqrt( pow(b,2) - 4*a*c ) ) / (2*a);
	x2= (-b - sqrt( pow(b,2) - 4*a*c ) ) / (2*a);

	cout.precision(3);//con esta linea se redondea el decimal hasta 3 valores despues de la coma
	cout <<"\nX1 es: "<<x1<<'\n';
	cout <<"\nX2 es: "<<x2<<'\n';

	return 0;
}
