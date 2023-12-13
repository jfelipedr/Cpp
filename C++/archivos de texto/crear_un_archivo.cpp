/*archivos de texto*/
/*programa para crear un archivo de texto y escribir en el archivo*/
#include <iostream>
#include <stdlib.h>//para usar el exit()
#include <fstream>//libreria para file stream

void write();

int main()
{
    write();

    return 0;
}

void write()
{
    std::ofstream archivo;//etiquetador del archivo
    //es como crear una variable "archivo" de tipo output-file-stream (ofstream)

    archivo.open("prueba.txt", std::ios::out);  //se crea el archivo en la ruta donde esta el .cpp
                                                //y abre el archivo porque no existe si no, lo sobre escribe
    /*primero se pone la direccion del archivo, si solo se pobe el nombre, se crea el archivo
    en la ruta donde esta el programa; luego el modo en el que se va a abrir el archivo*/

//  archivo.open("C:/Users/IntelPC/Desktop/prueba.txt",ios::out); asi se crearia en el escritorio

    if (archivo.fail()) // el .fail() envia un true si hubo un error
    {
        std::cout <<"No se pudo abrir el archivo";
        exit(1); /*exit termina el programa sin importar cuanto codigo falte por ejectar,
        normalmente la salida en "0" pero al poner exit(1) indicamos que el programa
        retorne 1, indicando que hay un error, se puede poner cualquier numero, diferente a "0"
        para indicar que el programa tuvo un error*/
    }

    archivo <<"Hola";//se escribe el texto en el archivo
    archivo.close();//se cierra el archivo
}