/*Polimorfismo:
las clases reponden de forma distinta ante el mismo metodo*/
#include <iostream>

class Person
{
    private://atributos
        string name;
        int age;
    public://metodos
        Person(string, int);//constructor
        virtual  void show();/*metodo de polimorfismo, que se identifica por el "virtual"
        solo hace falta indicarlo en la clase padre, aunque puede ser escrito en las otras clases*/
};

//clase hija de person
class Student : public Person
{
    private:
        float note;
    public:
        Student(string,int,float);
        void show();
};

//clase hija de person
class Teacher : public Person
{
    private:
        string course;
    public:
        Teacher(string,int,string);
        void show();
};

//constructor person
Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}

//constructor Student
Student::Student(string _name, int _age, float _note) : Person(_name, _age)
{
    note = _note;
}

//constructor Teacher
Teacher::Teacher(string _name, int _age, string _course) : Person(_name, _age)
{
    course = _course;
}

void Person::show()
{
    std::cout<< "\tName: "<< name<< '\n';
    std::cout<< "\tAge: "<< age<< '\n';
}

void Student::show()
{
    Person::show();
    std::cout<< "\tNote: "<<note<< '\n';
}

void Teacher::show()
{
    Person::show();
    std::cout<< "\tCourse: "<< course<< '\n';
}


int main()
{
    Person *vector[3];//al usar polimorfismo usualmente se usan punteros

    vector[0] = new Student("Juan",97,4.5);
    vector[1] = new Student("Maria",26,3.2);
    vector[2] = new Teacher("Jose",38,"Programacion");

    vector[0]-> show();
    std::cout<< '\n';
    vector[1]-> show();
    std::cout<< '\n';
    vector[2]->show();
    std::cout<< '\n';

    return 0;
}
