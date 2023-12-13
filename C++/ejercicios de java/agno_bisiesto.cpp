//verificar año Bisiesto
#include <iostream>
using namespace std;
int main(){
    int year;

    cout<<"Escriba el año: "; cin>>year;

    if (year%4==0 && year%100!=0) {

        cout<<year<<" Es un año Bisiesto";
    }
    else {
        cout<<year<<" Es un año Normal";
    }
	return 0;
}