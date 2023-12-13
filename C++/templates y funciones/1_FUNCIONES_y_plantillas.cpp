/*Funciones
sintaxis basica para definir una funcion:
tipo (int, float, char, void) dependiendo del tipo la funcion retorna un valor por eso la funcion
int main(){
    instrucciones
return 0;
} retorna un valor entereo, que establecenmos como 0 la funcion tipo VOID no retorna nada
tras declarar el tipo, se define su nombre, por ejemplo main
depues se puede definir entre parentesis los parametros o argumentos, estos son variables que
se van a utilizar en la funcion, por lo que se define su tipo y nombre, ejemplo:
int main(char variable_1, float argumento_2, type variable_n){
    instrucciones
return 0;
}
todos los programas deben tener una funcio main(), la cual retorna un valor entero, es recomendable
usar la siguien guia para crear programas en C++:*/
/*
directivas de preprocesador (llamar librerias,using namespace std; etc... todo lo que comienze con "#")

prototipos de funcion (forma en que indicamos que una funcino existe)ejemplo:
int name_function(int a1, int a2); en esta seccion no se definen las instrucciones de la funcion

int main(){              	la funcion main es la "unica" ejecutada por el programa, porque
	instrucciones			lo tanto si en esta no se llaman las otras funciones que creemos
    return valor			no seran ejecutadas.
}
definicion de funcion
*/
/*Ejemplo1 crear funciones*/
#include <iostream>

//prototipo de funcion

int main()
{
	int n1, n2, mayor;

	std::cout << "Digite 2 numeros: ";
	std::cin >> n1 >> n2;

	mayor = encontar_max(n1, n2);//la salida de la funcion sera el numero mayor

	std::cout << mayor << " es el numero mayor" << '\n';

	//tambien se puede imprimir directamene el valor que retorna la funcion
	//para ahorrase crear la variable mayor
	std::cout << "otra forma de imprimir: " << encontar_max(n1, n2) << '\n';

	return 0;
}

//definicion de funcion encontar_max
int encontar_max(int x, int y){
	int num_max;

	if (x > y)
		num_max = x;
	
	else
		num_max = y;

	return num_max;
}