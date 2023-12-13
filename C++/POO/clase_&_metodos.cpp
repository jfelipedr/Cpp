/*clase rectangulo con metodos perimetro y area*/
#include <iostream>

class Rectangulo
{
    private: //atributos
        float altura, ancho;
    public: //metodos
        Rectangulo(float,float); //constructor
        void perimetro();
        void area();
};

//iniciar el constructor
Rectangulo::Rectangulo(float _altura, float _ancho)
{
    altura = _altura;
    ancho = _ancho;
}

//metodo perimetro
void Rectangulo::perimetro()
{
    /*float peri;
    peri = largo*2 + ancho*2;

    return peri;
    se pede hacer asi para que la funcion retorne el perimetro en vez de imprimirlo*/

std::cout<< "\nEl perimetro es: \t"<< altura*2 + ancho*2<< '\n';
}

//metodo area
void Rectangulo::area()
{
    /*float ar;
    ar = largo*ancho;

    return ar;*/

    cout<< "\nEl area es: \t\t"<< altura*ancho<< endl;
}

int main()
{
    float a,b;

    cout<< "-----------Calcular el perimetro y el area de un rectangulo-----------"<< '\n';

    cout<< "\nEscriba la altura del rectangulo: ";
    cin>> a;

    cout<< "\nEscriba el ancho del rectangulo: ";
    cin>> b;

    Rectangulo r1(a,b);

    r1.perimetro();
    r1.area();

    return 0;
}