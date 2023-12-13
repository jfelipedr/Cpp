/*Crear estrctura para evaluar los datos de un participante y asignarlo a una categoria*/
/*En este ejemplo:
young<=18
adult<=40
veteran>40*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct runner {
	char name[30];
	int age;
	char gender[25];
}R1;

int main(){
	char category[10];
	cout<<"\n-------------Ingrese los del corredor-------------"<<endl<<endl;

	cout<<"\nEnter the name: ";
	cin.getline(R1.name,30,'\n');

	cout<<"\nEnter age:";
	cin>>R1.age;
	fflush(stdin);

	cout<<"\nEnter gender: ";
	cin.getline(R1.gender,25,'\n');

	if (R1.age<=18) {
		strcpy(category,"young");/*otra forma de usar strcpy() destino,cadena a guardar*/
	}
	else if (R1.age<=40) {
		strcpy(category,"adult");
	}
	else if (R1.age>40) {
		strcpy(category,"veteran");
	}

	cout<<"\n-------------Categoria para la competicion-------------\n"<<endl;
	cout<<"Name: "<<R1.name<<endl;
	cout<<"Age: "<<R1.age<<endl;
	cout<<"Gender: "<<R1.gender<<endl;
	cout<<"Category: "<<category<<endl;

	return 0;
}