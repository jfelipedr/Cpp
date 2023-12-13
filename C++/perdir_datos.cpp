/*Se pueden hacer comentarios mas grandes delimitados por el simbolo / * y * / al final
del comentario
*/

/*Programa que lee el nombre sexo y edad y lo imprime en consola*/

#include<iostream>

using namespace std;

int main (){

    int edad;
    char sexo[10];/*al usar [] en la variables char se limita el maximo de caracteres que puede
                    guardar pero se puede guardar mas de uno en la variable*/

    cout<<"Digite su edad: "; cin>>edad;
    cout<<"Digite su sexo: "; cin>>sexo; //cin no es la mejor forma de guardar cadenas de texto

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;

    return 0;
}
