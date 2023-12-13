/*Colas estructuras donde siempre se agrega por un lado y se elimina por otro
el primero elemento en llegar es el primero es salir
al quitar un elemento el que ocupaba la posicion contigua pasara a ocupar la nueva posicion vacia
o sea al quitar elementos se elimina el espacio sobrante y al ingresar se crea el espacio*/
/*para insertar elementos a la cola:
1. Crear espacio en memoria
2. Asignar el nuevo nodo al dato que queremos insertar
3. Asignar los punteros que señalan el frente y fin del nuevo nodo

ejemplo de funcion:*/
struct nodo{
    int dato;
    nodo *siguiente;    
};

void insertar_en_cola(nodo *&frente,nodo *&fin,int n) {
    nodo *nuevo_nodo= new nodo();
    nuevo_nodo-> dato = n;
    nuevo_nodo-> siguiente = NULL;

    if (cola_vacia(frente)) {       //condicional necesario para saber si la cola
        frente = nuevo_nodo;        //esta vacia
    }
    else{
        fin-> sgte = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

/*ejemplo de funcion para eliminar elementos de la cola:*/
void suprimir_cola(nodo *&frente,nodo *&fin,int &n) {
    n = frente-> dato;
    nodo *aux = frente;

    if (frente==fin) {
        frente=NULL;
        fin = NULL;
    }
    else{
        frente = frente->sgte;
    }
    delete aux;
}
