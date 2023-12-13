/*Metodo por insercion:
compara cada elemento con el anerior, y va modificando la lista hasta que todos los
elementos anteriores al elemento analizado esten ordenados, solo en ese caso avanza
al siguiente elemento para volver a hacer la comparacion*/
#include<iostream>
using namespace std;
int main(){
	int num[] = {3,4,2,1,5};
	int i,pos,aux;

    cout<<"\n---------------Programa para ordenar un array de enteros por insercion---------------\n";

//bucle ordenamiento por insercion
	for(i=0;i<5;i++){
		pos = i;
		aux = num[i];

		while((pos>0) && (num[pos-1] > aux)){
			num[pos] = num[pos-1];
			pos--;
		}
		num[pos] = aux;
	}

	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<num[i]<<" ";
	}

	cout<<"\nOrden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<num[i]<<" ";
	}

	return 0;
}
