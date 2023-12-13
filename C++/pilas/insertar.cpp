/*Insertar elementos en una pila*/
#include<iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void agregar_pila(nodo *&,int);

int main(){
	cout<<"\n---------------Insertar elementos en una pila---------------\n";

	nodo *pila=NULL;
	int n1,n2;
	cout<<"\nDigite un numero: ";
	cin>>n1;
	agregar_pila(pila,n1);

	cout<<"\nDigite otro numero: ";
	cin>>n2;
	agregar_pila(pila,n2);

 	return 0;
}

void agregar_pila(nodo *&pila,int n){
	nodo *nuevo_nodo = new nodo();	//los cuatro pasos basicos
	nuevo_nodo->dato = n;			//para agregar elementos
	nuevo_nodo->siguiente = pila;	//a las
	pila = nuevo_nodo;				//pilas

	cout<<"\nElemento "<<n<<" agregado a PILA"<<endl;
}