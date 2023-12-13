/*Header files*/
/*Sirven para solucionar el problema de usar la misma funcion en mas de un archivo de codigo y evitar
tener que declarar la funcion y luego defirnirla 'n' veces en cada archivo que las vaya a usar
como por ejemplo las funciones 'cout' o 'cin'*/

/*Pasos:
1. Crear 2 archivos:
    uno que sera la declaracion.h ejemplo de declaraciones:

        void funcion_name(tipo variables, otro_tipo variables);
    recordar poner '#pragma once' al inicio del archivo para evitar errores en los que mas de una archivo
    lo invluye al momento de compilar

    otro que sera la definicion.cpp
    escribir las funciones, ejemplo:

        void funcion_name(tipo variables, otro_tipo variables)
        {
            codigo que ejecuta la funcion
        }

2. Incluir los funciones en los archivos que van a usar esas funciones:
    #include "declaracion.h"
    recordar usar siempre "" en el #include ya que son archivos que nosotros hemos creado, o sea no
    bienen incluidos con el compilador*/
