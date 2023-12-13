/*Ejercicio 4: Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y mostrarla en pantalla.*/
#include <iostream>
#include <time.h>//para al funcion time();
#include <iomanip>//incluir esta libreria para usar setw();
#include <stdlib.h>// para el srand();
using namespace std;
int main(){
    int fil, col;
    cout<<"Ingrese el numero de filas de la matriz: "; cin>>fil;
    cout<<"Ingrese el numero de columnas de la matriz: "; cin>>col;

    int mat[fil][col];// si se define la matriz al principio no se imprime en pantalla

    srand(time(NULL));

    for(int i = 0; i < fil; i++) {
        for(int j = 0; j < col; j++) {
            mat[i][j] = 1 + rand() % (100);
        }
    }

    for(int i = 0; i < fil; i++) {
        for(int j = 0; j  < col; j++) {
            cout<<setw(4)<<mat[i][j];   /*setw() es una funcion de la libreria iomanip para generar espacios en la salida (cout)
            tiene el mismo resltado que escribir el numero de esapacios como cout<<"    "; pero encaso de ser muchos los esapacios
            se ve mas ordenado el codigo*/
        }
        cout<<endl;
    }
    return 0;
}