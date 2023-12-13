/*Existen estrcturas anidadas, o sea una estructura dentro de otra por ejemplo:
si una estructura contiene informacion de la direccion se puede agregar esta
dentro de una estructura que contenga informacion de empleados, de tal forma que no es necesario
crear vaiables de direccion en la estructura empleados*/

/*Se pueden crer arreglos de estructuras, al igual que los vectores en cada casilla se
almacenaria una estructura*/
#include<iostream>
#include <stdlib.h>
using namespace std;

struct info_direccion {
	char direccion[30];
	char barrio[25];
	char ciudad[25];
};

struct empleado{
	char nombre[20];
	int salario;
	struct info_direccion dir_empleado;
}empleados[2];

int main(){
	cout<<"\n-------------Ingrese los datos del empleado-------------"<<endl<<endl;

//bucle ingresar datos
	for (int i = 0; i <2; i++) {
/*permite vaciar el buffer y que al reiniciar el bucle no se produzcan errores al intenter llenar datos*/
		fflush(stdin);/*vacia el buffer de las entradas (stdin) para que el iniciar el bucle no
		queden datos guardados de otras entradas*/

		cout<<"\nIngrese su nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');

		cout<<"\nIngrese su salario: ";
		cin>>empleados[i].salario;
		fflush(stdin);/*se ubica aca porque al ingresar en numero, se llenaba automaticamente
		con un espacio en blanco la siguiente entrada*/

		cout<<"\nDigite su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');

		cout<<"\nIngrese su barrio: ";
		cin.getline(empleados[i].dir_empleado.barrio,25,'\n');

		cout<<"\nIngrese su ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,25,'\n');
		cout<<endl;
	}

//bucle mostrar datos
	for (int i = 0; i < 2; i++) {
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Barrio: "<<empleados[i].dir_empleado.barrio<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<endl;
	}

	return 0;
}