/*Declaracion de punteros
&n = direccion de n
*n = la variable cuya direccion esta almacenada en n
puneros son una variables que guarda la direccion de memoria de otra variable
se debe declarar de que tipo son los punteros (int, float) y ponerle un asterisco '*'*/
#include<iostream>

int main()
{
    int num = 20, *dir_num;
    dir_num = &num;//se esta asignando la direccion de memoria en la variable dir_num

	std::cout<< "\n---------------Declaracion de punteros---------------\n";

    /*con los punteros se puede saber el contenido y la direccion de memoria de sus variables*/
	std::cout<< "\nEl numero es: "<<*dir_num<<'\n';/*al usar '*dir_num' se imprime lo que este guardado
                                            en la direccion de memoria que previamente asignamos*/

	std::cout<< "\nLa deireccion de memoria es: "<<dir_num<<'\n';/*&variable == direccion de memoria de la vaiable*/
    /*o sea "dir_num" es la direccion de memoria y "*dir_num" es el contenido de esa direccion*/
 	return 0;
}