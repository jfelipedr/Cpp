/*Crea una matriz 3x3 y su transpuesta, o sea cambio el contenido de las columnas a las filas ejemplo:
/1 2 3/       /1 4 7/
/4 5 6/  -->  /2 5 8/
/7 8 9/       /3 6 9/  */
#include <iostream>
using namespace std;
int main(){
    int num[3][3];
    /*Se puede cambiar el numero de filas y columnas para que el programa
    genere la matriz transpuesta de cualquier matriz, incluso si no es cuadrada*/

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
            cin>>num[i][j];
        }
    }

    cout<<"\nMatriz original: \n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j  < 3; j++) {
            cout<<"  "<<num[i][j];
        }
        cout<<endl;
    }

    cout<<"\nMatriz transpuesta: \n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j  < 3; j++) {
            cout<<"  "<<num[j][i];
        }
        cout<<endl;
    }

    return 0;
}