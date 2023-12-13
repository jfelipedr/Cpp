/*ejemplo llenando una estructura*/
#include<iostream>
using namespace std;

struct coleccion_CD {
	char titulo[30];
	char artista[25];
	int num_canciones;
	float precio;
}
CD1={"clocks", "coldplay", 12, 25.50},
CD2={"californication", "RHCP", 15, 18.75},
CD3;

int main(){
	cout<<"\nTitulo: "<<CD1.titulo<<endl;
	cout<<"artista: "<<CD1.artista<<endl;
	cout<<"numero de canciones: "<<CD1.num_canciones<<endl;
	cout<<"precio: "<<CD1.precio<<endl;

	cout<<"\nTitulo: "<<CD2.titulo<<endl;
	cout<<"artista: "<<CD2.artista<<endl;
	cout<<"numero de canciones: "<<CD2.num_canciones<<endl;
	cout<<"precio: "<<CD2.precio<<endl;

	cout<<"\n-------------Ingrese los datos del CD #3-------------"<<endl;

	cout<<"Titulo: "<<endl;
	cin.getline(CD3.titulo,30,'\n');

	cout<<"artista: "<<endl;
	cin.getline(CD3.artista,25,'\n');

	cout<<"numero de canciones: "<<endl;
	cin>>CD3.num_canciones;

	cout<<"precio: "<<endl;
	cin>>CD3.precio;

	cout<<"\n-------------Los datos del CD #3-------------"<<endl;

	cout<<"\nTitulo: "<<CD3.titulo<<endl;
	cout<<"artista: "<<CD3.artista<<endl;
	cout<<"numero de canciones: "<<CD3.num_canciones<<endl;
	cout<<"precio: "<<CD3.precio<<endl;
	return 0;
}