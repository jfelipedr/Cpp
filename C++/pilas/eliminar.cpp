/*Sacar elementos de la pila*/
#include<iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void agregar_pila(nodo *&,int);
void sacar_pila(nodo *&,int &);

int main(){
	cout<<"\n---------------Quitar elementos de una pila---------------\n";

	nodo *pila=NULL;
	int dato; //se usa un solo dato porqe al agregar a la pila ya queda guardardo

	cout<<"\nDigite un numero: ";
	cin>>dato;
	agregar_pila(pila,dato);

	cout<<"\nDigite otro numero: ";
	cin>>dato;
	agregar_pila(pila,dato);

	cout<<"\nSacando los elementos de la pila:";
	while (pila != NULL) {
		sacar_pila(pila,dato);
		if (pila!=NULL) {
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}

 	return 0;
}

void agregar_pila(nodo *&pila,int n){
	nodo *nuevo_nodo = new nodo();	//los cuatro pasos basicos
	nuevo_nodo->dato = n;			//para agregar elementos
	nuevo_nodo->siguiente = pila;	//a las
	pila = nuevo_nodo;				//pilas

	cout<<"\tElemento "<<n<<" agregado a PILA"<<endl;
}

void sacar_pila(nodo *&pila,int &n){
	nodo *aux=pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}