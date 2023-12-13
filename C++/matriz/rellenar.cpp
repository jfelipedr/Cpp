/*rellenar una matriz*/
#include <iostream>
using namespace std;
int main() {

    cout<<"\n---------------Crear una matriz y rellenarla---------------\n";
    int filas, columnas, num[filas][columnas];

    cout<<"Ingrese el numero de filas: "; cin>>filas;
    cout<<"Ingrese el numero de columnas: "; cin>>columnas;

//este bucle es para guardar los elementos en la matriz
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]";//imprime en que posicion se esta guardando el elemento
            cin>>num[i][j];
        }
    }
//este bucle es para mostrar la matriz
    cout<<endl;
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            cout<<"\t"<<num[i][j];
        }
        cout<<endl; // se pone aqui el salto de linea para que salte depues de cada fila
    }

    return 0;
}