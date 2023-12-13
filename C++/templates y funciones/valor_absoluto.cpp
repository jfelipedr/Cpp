/*sacar el valor absoluto de un numero*/
#include <iostream>

/*prototipo de funcion sirve para solucionar el problema de entrada de datos
cuando no se sabe que tipo de variables se va a ingresar*/

template <class type_of>/*En este caso type_of engloba el tipo de numeros que se pueden ingresar
						por ejemlo entero flotante, etc..*/

void mostrar_abs(type_of numero);//tras definir el template se define la funcion

int main()
{
	int num1 = -4;
	float num2 = 6.28318530717958647;
	double num3 = -3.14159265358979323846;

	std::cout << "\n---------------Uso de templates!!---------------\n";

	mostrar_abs(num1);
	mostrar_abs(num2);
	mostrar_abs(num3);

	return 0;
}

template <class type_of>//no es necesario poner type_of se puede poner cualquier noombre
void mostrar_abs(type_of numero){
	if (numero<0)
		numero = numero * -1;

	std::cout << "El valor absoluto es: " << numero << '\n';
}
