//realizar las operaciones basicas con los numeros "a" y "b"
#include<iostream>
using namespace std;
 int main(){
 	int a, b, suma=0, resta=0, mult=0, div=0;
 	
 	cout<<"Digite el numero a:"; cin>>a; //al usar ; ya se separan las instrucciones, pero se puede usar varias en una linea
 	cout<<"Digite el numero b:"; cin>>b;
 	
 	suma= a+b;
 	resta= a-b;
 	mult= a*b;
 	div= a/b;
//endl se usa para crearun salto de linea al igual que \n solo que no se puede usar dentro del texto como \n
 	cout<<"\nLa suma de a y b es: "<<suma<<endl; 
 	cout<<"\nLa resta de a y b es: "<<resta<<endl; 
	cout<<"\nLa multiplicacion de a y b es: "<<mult<<endl; 
	cout<<"\nLa division de a y b es: "<<div<<endl; 
	 	
 	return 0;
 }
