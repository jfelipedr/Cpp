/*transmision de arreglos para hallar el elemento mayor de un arreglo*/
#include<iostream>

int hallar_max(int *,int);/*se define que el primer parametro e tipo puntero*/

int main(){
	std::cout<< "\n---------------hallar el elemento mayor de un arreglo---------------\n";

	const int n_elementos = 5;
	int numeros[n_elementos] = {3, 5, 2, 8, 1};

	std::cout<< "\nEl elemento mayor es: "<<hallar_max(numeros,n_elementos);

 	return 0;
}

int hallar_max(int *dir_vec,int n_elementos)
{
	int max = 0;
	for (int i = 0; i < n_elementos; i++)
	{
		if ( *(dir_vec+i)>max )
			max = *(dir_vec+i);
	}
	return max;
}