/*Estructuras:
Es una coleccion de datos que pueden ser de distinto tipo (int, float, char),
en los arrays todos los datos son de un tipo en las Estructuras no necesariamente*/

/*Para definir una estructura se declara fuera de la funcion main() usando la palabra reservada struct, luego e define el nombre
y depues los elementos que contiene por ejemplo: para almacenar los datos de una coleccion de CD's */
struct coleccion_CD {
	char titulo[30];
	char artista[25];
	int num_canciones;
	float precio;
	char fecha_compra[20];
};//es importante poner punto y como despes de definir una estructura
/*Para definir variables de la estructura se pueden de dos formas:
1: fuera de la estructura por ejemplo dentro de la fncion main()*/
int main(){
	struct coleccion_CD CD1, CD2, CD3;/*cada una de las variables (CD1,CD2,CD3) contiene todos
	los campos de la estructura, por ejemplo CD1.titulo o CD3.precio*/
}
/*2: durante la creacion de la estructura se pueden declarar las variables de la estructura:*/
struct coleccion_CD {
	char titulo[30];
	char artista[25];
	int num_canciones;
	float precio;
	char fecha_compra[20];
}CD1, CD2, CD3;//no olvidar el punto y coma