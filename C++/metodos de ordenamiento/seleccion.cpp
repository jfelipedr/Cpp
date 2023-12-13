/*Ordenamiento por Seleccion:
Primero busca el minimo elemento de la lista y lo ubica en la primera posicion
lugeo vuelve a bucar el minimo elemento del resto del array y lo vulve a ubicar
hasta ordenar toda la lista  */
#include<iostream>
using namespace std;
int main(){
	int numeros[] = {4,3,1,5,2};
	int i,j,aux,min;

	//bucle del Ordenamiento por Seleccion
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}

	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}

	cout<<"\nOrden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}

	return 0;
}