/*Tomar los datos de n empleados e imprimir el de mayor y menor salario*/
#include<iostream>
using namespace std;
int main(){
	int n, pos_max=0, pos_min=0;
	float max_salary=0, min_salary=9999999;/*se puede dejar la variable min_salary sin declarar y
	apenas se defina el valor del primer salario igual los valores para que se compara el
	menor salario con en primero ingresado, pero se deberia usar un bucle adicional para definir ese
	salario minimo por fuera, o sea pedir datos de un empleado guardar salarioy en un bucle aparte
	perdir los otros datos y comparar*/

	cout<<"\n-------------Input employee information-------------"<<endl<<endl;

	cout<<"\nInput employees number: ";
	cin>>n;/*si se pide este valor despues de crear la struct da un error al entrar al bucle for
	y no para*/

	struct employee {
		char name[30];
		float salary;
	}emp[n];//verificar como crear el numero de employee fuera del main()


	for (int i = 0; i < n; i++) {
		fflush(stdin);
		cout<<"\nEmployee #"<<i+1<<".\tEnter the name: ";
		cin.getline(emp[i].name,30,'\n');

		cout<<"\n\t\tEnter salary:";
		cin>>emp[i].salary;

		if (emp[i].salary>max_salary) {
			max_salary=emp[i].salary;
			pos_max=i;
		}
		if (emp[i].salary<min_salary) {
			min_salary=emp[i].salary;
			pos_min=i;
		}
		cout<<"\n";
	}

	cout<<"\n-----Highest paid Employee-----\n";
	cout<<"\nName: "<<emp[pos_max].name;
	cout<<"\nSalary: "<<emp[pos_max].salary;

	cout<<"\n-----Lowest paid Employee-----\n";
	cout<<"\nName: "<<emp[pos_min].name;
	cout<<"\nSalary: "<<emp[pos_min].salary;

	return 0;
}