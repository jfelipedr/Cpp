/*programa que determina si una matriz es simetrica, es decir tiene que ser una matriz cuadrada matriz[n][n]
y su transpuesta es igual a la original ejemplo:
/8 1 3/       /8 1 3/
/1 7 4/  -->  /1 7 4/
/3 4 9/       /3 4 9/  */

/*Buscar documentacion para mejorar el programa, ya que no esta optimizado*/

#include <iostream>
using namespace std;
int main(){
    bool transpuesta=false;/*esta misma variable puede ser de tipo char, por ejemplo: char comprobar='f'
    ambas variables ocupan el mismo espacio en memoria (1byte) y la comprobacion se realiza de la misma forma*/
    char variable;
    int filas, columnas;
    int matriz1[filas][columnas];
    float matriz2[filas][columnas];
    char matriz3[filas][columnas];

    cout<<"\n---------------Crear una matriz e identificar si es simetrica o no---------------\n";

    cout<<"\nIngrese el numero de filas: "; cin>>filas;
    cout<<"\nIngrese el numero de columnas: "; cin>>columnas;

    cout<<"\nQue tipo de variables tiene su matriz?\n";
    cout<<"\n 1 --> enteros (int)";
    cout<<"\n 2 --> decimales (float)";
    cout<<"\n 3 --> caracteres (char[1])\n";
    cin>>variable;

    while (variable!='1' && variable!='2' && variable!='3') {
        cout<<"\nOpcion no valida, intente de nuevo: ";
        cin>>variable;
    }

    //guardar matriz
    switch (variable) {
        case '1': cout<<"\nEligio crear una matriz de enteros ["<<filas<<"]["<<columnas<<"]\n";
                for(int i = 0; i < filas; i++) {
                    for(int j = 0; j < columnas; j++) {
                        cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
                        cin>>matriz1[i][j];
                    }
                }
                if (filas==columnas) {
                    for(int i = 0; i < filas; i++) {
                        for(int j = 0; j  < columnas; j++) {
                            if (matriz1[i][j]==matriz1[j][i]) {
                                transpuesta=true; /*esta comprobacio esta mal implementada*/
                            }
                        }
                    }
                }

                if (transpuesta==true) {
                    cout<<"\n---------La matriz es simetrica---------\n";
                }
                else{
                    cout<<"\n---------La matriz NO es simetrica---------\n";
                }

                cout<<"\nMatriz original: \n";
                for(int i = 0; i < filas; i++) {
                    for(int j = 0; j  < columnas; j++) {
                        cout<<"  "<<matriz1[i][j];
                    }
                    cout<<endl;
                }

                cout<<"\nMatriz transpuesta: \n";
                for(int i = 0; i < columnas; i++) {
                    for(int j = 0; j  < filas; j++) {
                        cout<<"  "<<matriz1[j][i];
                    }
                    cout<<endl;
                }
                break;

        case '2': cout<<"\nEligio crear una matriz de decimales ["<<filas<<"]["<<columnas<<"]\n";
                for(int i = 0; i < filas; i++) {
                    for(int j = 0; j < columnas; j++) {
                        cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
                        cin>>matriz2[i][j];
                    }
                }
                if (filas==columnas) {
                    for(int i = 0; i < filas; i++) {
                        for(int j = 0; j  < columnas; j++) {
                            if (matriz2[i][j]==matriz2[j][i]) {
                                transpuesta=true;
                            }
                        }
                    }
                }

                if (transpuesta==true) {
                    cout<<"\n---------La matriz es simetrica---------\n";
                }
                else{
                    cout<<"\n---------La matriz NO es simetrica---------\n";
                }

                cout<<"\nMatriz original: \n";
                for(int i = 0; i < filas; i++) {
                    for(int j = 0; j  < columnas; j++) {
                        cout<<"  "<<matriz2[i][j];
                    }
                    cout<<endl;
                }

                cout<<"\nMatriz transpuesta: \n";
                for(int i = 0; i < columnas; i++) {
                    for(int j = 0; j  < filas; j++) {
                        cout<<"  "<<matriz2[j][i];
                    }
                    cout<<endl;
                }
                break;

        case '3': cout<<"\nEligio crear una matriz de caracteres ["<<filas<<"]["<<columnas<<"]\n";
                for(int i = 0; i < filas; i++) {
                    for(int j = 0; j < columnas; j++) {
                        cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
                        cin>>matriz3[i][j];
                    }
                }
                if (filas==columnas) {
                    for(int i = 0; i < filas; i++) {
                        for(int j = 0; j  < columnas; j++) {
                            if (matriz3[i][j]==matriz3[j][i]) {
                                transpuesta=true;
                            }
                        }
                    }
                }

                if (transpuesta==true) {
                    cout<<"\n---------La matriz es simetrica---------\n";
                }
                else{
                    cout<<"\n---------La matriz NO es simetrica---------\n";
                }

                cout<<"\nMatriz original: \n";
                for(int i = 0; i < filas; i++) {
                    for(int j = 0; j  < columnas; j++) {
                        cout<<"  "<<matriz3[i][j];
                    }
                    cout<<endl;
                }

                cout<<"\nMatriz transpuesta: \n";
                for(int i = 0; i < columnas; i++) {
                    for(int j = 0; j  < filas; j++) {
                        cout<<"  "<<matriz3[j][i];
                    }
                    cout<<endl;
                }
                break;
    }

    return 0;
}
