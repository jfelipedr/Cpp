/*crear clases*/
#include <iostream>

class Persona //definicion de la clase persona
{
    private: //normalmente los atributos son privados y solo los metodos de la clase los modificarlos
        int age;
        string name;
    public: //lo metodos suelen ser publicos
        Persona(int,string);/*este es el constructor, un metodo que inicializa las variables de la clase
                normalmente tiene el mismo nombre que la clase*/
        void read();
        void run();
};

//inicializando el constructor tipo persona
/*normalmente al inicializar el constructor se hace con otro nombre de las variables por ejemplo
agregando un "_" al inicio del nombre*/
Persona::Persona(int _age, string _name)
{
    age = _age;
    name = _name;
}

/*Se pone Persona::metodo() para indicar que el metodo() es de la clase person, ya que estos metodos
se pueden repetir entre clases*/
void Persona::read()
{
    std::cout<< "Soy "<< name<< " de "<< age<< " años "<< " y estoy leyendo."<< '\n';
}

void Persona::run()
{
    std::cout<< "Soy "<< name<< " de "<< age<< " años "<< " y estoy corriendo."<< '\n';
}

int main()
{
    Persona p1 = Persona(20,"Juan");/*creando objeto de la clase "Persona" con nombre p1*/

    //llamando metodos de la clase
    p1.read();

    //otra forma de crear un objeto:
    Persona p2(15,"Maria");//se crea desde el constructor directamente
    p2.run();

    return 0;
}