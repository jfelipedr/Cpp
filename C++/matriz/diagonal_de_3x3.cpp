/*mostrar la diagonal de una matriz 3x3*/
#include<iostream>
using namespace std;

int main() {
    int numeros[3][3];

    cout<<"\n---------------Muestra la diagonal principal de una matriz 3x3---------------\n"<<endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    cout << "\n\nMostrando diagonal principal de la matriz\n";

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i==j) {
                cout<<numeros[i][j];
            }
            else cout<<"-";
        }

        cout<<endl;
    }

    return 0;
}