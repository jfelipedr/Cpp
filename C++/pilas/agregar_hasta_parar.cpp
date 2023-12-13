/*agregar numeros enteros hasta que el usuario decida parar*/
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
	cout<<"\n---------------agregar enteros a una pila y mostrarlos---------------\n";

	nodo *pila=NULL;
	int dato;
	char rpt;

	do {
		cout<<"\nDigite un numero: ";
		cin>>dato;
		agregar_pila(pila,dato);

		cout<<"\nDesea agregar otro elemento ? (s/n):";
		cin>>rpt;
	} while( rpt=='S'||rpt=='s' );

	cout<<"\nSacando los elementos de pila";
	while (pila!=NULL) {
		sacar_pila(pila,dato);
		if (pila!=NULL) {
			cout<<dato<<",";
		}
		else{
			cout<<dato<<".";
		}
	}

 	return 0;
}

void agregar_pila(nodo *&pila,int n){
	nodo *nuevo_nodo= new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;

	cout<<"\tElemento "<<n<<" agregado a PILA\n";
}

void sacar_pila(nodo *&pila,int &n){
	nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}