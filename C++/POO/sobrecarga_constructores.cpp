/*SOBRECARGA DE CONSTRCTURES*/
/*para una clase pueden existir mas de 1 constructor;
pero cada constructor debe tener un numero o un tipo de parametros distintos entre
cada constructor para que la maquina sepa que tipo usar segun la entrada que tenga*/
#include <iostream>

class Date
{
    private://atributos
        int day, month, year;
    public://metodos
        Date(int,int,int);//constructor 1 para formato dd mm yy
        Date(long);//constructor2 para formato yymmdd
        void show_date();
};

//iniciar el constructor1
Date::Date(int _day, int _month, int _year)
{
    day = _day;
    month = _month;
    year = _year;
}

//iniciar el constructor2
Date::Date(long _date)
{
    year = int( _date/10000 );//extraer el año
    month = int( (_date - year*10000)/100 );//extraer el mes
    day = int( _date - year*10000 - month*100 );//extraer el dia
}

//metodo para mostrar fecha
void Date::show_date()
{
    std::cout<< "\nLa fecha es: " << day<< "/"<< month<< "/"<< year<< '\n';
}

int main()
{
    Date today(18,04,2021);//objeto "today" con fecha formato dd mm yy
    Date tomorrow(20210419);//objeto "tomorrow" con fecha formato yymmdd

    //mostrando la fecha
    today.show_date();
    tomorrow.show_date();

    return 0;
}