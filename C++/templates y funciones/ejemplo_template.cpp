/*ejemplo de template*/
#include <iostream>

/*al definir un template se especifica que la funcion sera evaluada en el tiempo de compilacion o sea,
no es una funcion como tal; solo es creada cuando es llamada y depende de como es llamada asi sera compilada*/

//los template pueden tener varios argumentos

template <typename T>/*en este caso se usa "typename" como el parametro del template y
						"T" como un nombre, o sea se puede elegir uno de preferencia*/

					/*typename es lo mismo que class*/
					/*  	typename = class  		*/
					/*se usa mas typename para no confundir con una clase*/

void Print(T value)
{/*el parametro de la funcion en (T value),porque en el momento que sea llamada la funcion
					la "T" pasara a ser el tipo de variable (int, char, bool, etc..)*/
/* "value tambien puede ser un nombre escogido a conveniencia del programa"*/
	std::cout << '\n' << value << std::endl;
}
/*Como la funcion del template no es creada hasta que se llama
si existen error de sintaxis o de otro tipo DENTRO de la funcion puede que al compilar
no se vean los ERRORES si no es llamada la funcion, DEPENDE DEL COMPILADOR*/


int main()
{
	Print(3);
	Print<int>(2021);//se puede especificar el tipo de variable por medio de los "<>" en caso de ser necesario
	Print("hello");
	Print<std::string>("world");
	Print(579.3479f);

	std::cin.get();
}

//otro ejemplo
#include <iostream>
#include <string>

template <typename T, int N>
class Array {
private:
	T m_Array[N];
public:
	int GetSize() const { return N;}
};

int main()
{
	Array <std::string,10> array;
	std::cout << array.GetSize() << '\n';
	std::cin.get();
}
