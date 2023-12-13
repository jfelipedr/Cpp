/*Herencia:
ayuda a ahorrar lineas de codigo en caso de crear clases con los mismos atributos que
otra clase que ya este creada*/
#include <iostream>

class Person//super clase o clase padre
{
    private:/*Se puede reemplazar el private por protected para que las clases hijas tambien
    tengan los atributos al ser creadas, ejemplo:
    class Person
    {
        protected:
            int age;
            string name;
        public://metodos
            Person(int, string);//constructor
            void show_person();
    };*/
        int age;
        string name;
    public://metodos
        Person(string, int);//constructor
        void show_person();
};

class Student: public Person//de esta forma se indica que hereda todo lo publico de la clase Person
{
    private:
        float notes;
    public:
        //constructor de alumno
        Student(string, int, float);//se ponen los atributos en orden; Student(name,age,notes)
        void show_student();
};

//constructor de persona
Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}

//constructor de alumno
Student::Student(string _name, int _age, float _notes) : Person(_name, _age)/*con los :Person se indica
que lo que es de la clase persona se hereda, o sea que conserve el nombre y la edad*/
{
    notes = _notes;
}

//mostrar datos de Person
void Person::show_person()
{
    std::cout<< "Name: "<< name<< '\n';
    std::cout<< "Age: "<< age<< '\n';
}

//Mostrar datos de alumno
void Student::show_student()
{
    show_person();
    std::cout<< "Notas: "<< notes<< '\n';
}


int main()
{
    Student s1("Juan",10,4.5);
    s1.show_student();

    return 0;
}