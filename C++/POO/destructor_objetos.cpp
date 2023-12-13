/*Destructor de objetos
Como su nombre indica detruye los objetos una vez no son necesarios, por defecto
al crear un constructor el compilador crea un Destructor que se usa al cerrar el programa*/
#include <iostream>

class Perro
{
    private: //atributos
        string name, breed;
    public: //metodos
        Perro(string,string); //constructor
        ~Perro(); /*Los destructores se definen con el simbolo "~" y no requieren parametros*/
        void show_data();
        void play();
};

//constructor
Perro::Perro(string _name, string _breed)
{
    name = _name;
    breed = _breed;
}
//Destructor
Perro::~Perro(){}//no requiere parametros

void Perro::show_data()
{
    std::cout<< "\nName: "<< name<< '\n';
    std::cout<< "\nBreed: "<< breed<< '\n';
}

void Perro::play()
{
    std::cout<< "\nThe dog "<< name<< " is playing"<< '\n';
}

int main()
{
    Perro p1("Max","Labrador");

    p1.show_data();
    p1.play();
    p1.~Perro();//destruyendo el objeto p1

    return 0;
}