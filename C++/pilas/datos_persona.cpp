//ejemplo de pila tomado de comentario de youtube.
/*Pila con los datos de una persona:

	1. Nombre
	2. Edad
	3. Sexo

*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char nombre[30];
	int edad;
	char sexo[30];
	Nodo *puntero;
};

void EntradaSalida();
void insertar(Nodo *&pila, char nombre[30], char sexo[30], int edad);
void quitar(Nodo *&pila, char nombre[30], char sexo[30], int &edad);

int main(){

	EntradaSalida();

	return 0;
}
void EntradaSalida(){

	Nodo *pila = NULL;
	int cantidad, edad, opcion;
	char nombre[30], sexo[30];

	cout<<"Cantidad de personas a ingresar: "; cin>>cantidad; cin.ignore(256,'\n'); system("cls");

	for(int i = 1; i <= cantidad; i++){
		cout<<"\n\t.:Persona "<<i<<":.\n";
		cout<<"\tNombre: "; cin.getline(nombre, 30, '\n');
		cout<<"\tEdad: "; cin>>edad; cin.ignore(256, '\n');
		cout<<"\tSexo: "; cin.getline(sexo, 30,'\n');
		insertar(pila, nombre, sexo, edad); system("cls");
	}

	cout<<"\n\tDesea mostrar los datos: \n"<<"\t1) Si\n"<<"\t2) No\n"<<"\tOpcion: "; cin>>opcion; system("cls");

	switch(opcion){

		case 1:
			cout<<"\n\n\t.:IMPRESION DE PILA:.\n";
			while(pila != NULL){

				quitar(pila, nombre, sexo, edad);

				cout<<"\n\t.:[Persona "<<cantidad<<"]:.\n";
				cout<<"\tNombre: "<<nombre<<endl;
				cout<<"\tEdad: "<<edad<<endl;
				cout<<"\tSexo: "<<sexo<<endl<<endl; cantidad--;
			}
		break;

		case 2:
			cout<<"\n\t.:Hasta pronto...!:.\n\n\t"; system("pause");
		break;

	}
}
void insertar(Nodo *&pila, char nombre[30], char sexo[30], int edad){

	Nodo *nuevo = new Nodo();
	strcpy(nuevo->nombre, nombre);
	strcpy(nuevo->sexo, sexo);
	nuevo->edad = edad;
	nuevo->puntero = pila;
	pila = nuevo;

	cout<<"\nDatos agregados correctamente en PILA...\n\n"; system("pause");
}
void quitar(Nodo *&pila, char nombre[30], char sexo[30], int &edad){

	Nodo *aux = pila;
	strcpy(nombre, aux->nombre);
	strcpy(sexo, aux->sexo);
	edad = aux->edad;
	pila = aux->puntero;
	delete aux;
}