
//programa que evalua numeros y muestra el mayor y menor
#include <iostream>
using namespace std;
int main(){
    int i;
    float nmayor, nmenor, num, cantidad;

    cout<<"-------------Este programa evalua 'n' numeros y muestra el mayor y menor-------------"<<endl;

    cout<<"Cuantos numeros quiere comparar ? ";
    cin>>cantidad;

    cout<<endl<<"Introduce los numeros"<<endl;

    for(i=1; i<=cantidad; i++) {
        cin>>num;

        if(i==1)nmayor=nmenor=num;

        if(nmayor<num)nmayor=num;

        if(nmenor>num)nmenor=num;
    }

    cout<<"El numero mayor es: "<<nmayor;

    cout<<endl<<"El numero menor es: "<<nmenor;

    return 0;
}
