/*Metodos Getters y Setters:
Usados para establecer y pedir informacion de los atributos de una clase, ya que estos
suelen ser encapsulados*/
#include <iostream>

class Punto
{
    private://atributos
        int x, y;
    public://metodos
        Punto();//constructor
        void setPunto(int,int);/*metodo "set" para establecer atributos desde fuera de la clase
        util cuando no se quieren establecer todos los atributos de golpe, por ejemplo declarar la mitad
        de los atributos ahora y la otra mitad en otro tiempo*/
        int getPunto_x();//es de tipo int porque debe pedir variables tipo int
        int getPunto_y();//se puede crear un metodo get que muestre los dos valores a la vez
};

//constructor
Punto::Punto(){
}

void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

int Punto::getPunto_x()
{
    return x;
}

int Punto::getPunto_y()
{
    return y;
}


int main()
{
    Punto p1;//creando objeto p1
    //como el constructor no tiene parametros hay que definir posteriormente sus atributos
    p1.setPunto(10,25);
    std::cout<< p1.getPunto_x()<< '\n';
    std::cout<< p1.getPunto_y()<< '\n';

    return 0;
}