/*programa para leer contenido de un archivo*/
#include <iostream>
#include <stdlib.h>//para usar el exit()
#include <fstream>//libreria para file stream

using namespace std;

void read();

int main()
{
    read();

    return 0;
}

void read()
{
    ifstream archivo;// input-file-stream

	string text;

	archivo.open("prueba.txt",ios::in);/*abriendo archivo de nombre "prueba.txt"
	ubicado en la ruta donde esta el programa, en modo lectura (input)*/
/*al igual que creando un fichero para escribir se pude especificar la ruta y nombre del archivo
que se desea abrir*/

//	archivo.open("C:/Users/IntelPC/Desktop/prueba.txt",ios::in); abriendo el archivo desde el escritorio

    if (archivo.fail())
    {
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

	while (!archivo.eof())/*!archivo.eof() indica le indica al while que mientras
	no sea el final del archivo .eof() es la funcion para recorrer el archivo*/
	{
		getline(archivo,text);//copiar el texto del archivo en la variable "text"
		cout<<text<<endl;
	}

	archivo.close();
}