#include <iostream>
using namespace std;
int main() {

    cout<<"\n---------------Crear 2 arreglos, almacenar su info en un tercero e imprmir su contenido---------------\n";
    char letras1[]={'a','b','c','d','e'};
    char letras2[]={'f','g','h','i','j'};
    char letras3[10];

    //copiando los elementos de letras1
    for (int i = 0; i < 5; i++) {
        letras3[i]=letras1[i];
    }
    //copiando los elementos de letras2
    for (int i = 5; i < 10; i++) {
        letras3[i]=letras2[i-5];
    }
    //mostrar el nuevo vector
    for (int i = 0; i < 10; i++) {
        cout<<letras3[i]<<endl;
        /* code */
    }

    return 0;
}