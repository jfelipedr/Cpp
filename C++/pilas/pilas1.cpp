/*Una pila es una estructura de datos a la aque solo se le pueden agregar y eliminar datos por la "cima"
o sea el ultimo elemento en entrar es el primero en salir.
La pilas estan ordenadas por nodos cada uno conformado por un dato y un puntero que señala el dato de
abajo en la pila*/
/*Pasos para insertar elementos:
1. Reservar el espacio de memoria para un nodo
    antes inicializar una variable puntero tipo pila vacia
    pila=NULL;
    crear la struct nodo
    struct nodo{
        int dato
        nodo *siguiente;
    }
    nodo *nuevo_nodo= new nodo(); reservando el espacio
    Crear una funcion para agregar informacion y nodos:
        void agregar_pila(nodo *&pila, int ndato){
            nodo *nuevo_nodo = new nodo();
        }
2. Guardar el dato en el nodos
    nuevo_nodo->dato= xvalor;
    void agregar_pila(nodo *&pila, int ndato){
        nodo *nuevo_nodo = new nodo();
        nuevo_nodo->dato=n;
    }
3. Cargar el puntero pila dentro del nodo(*siguiente)
    nuevo_nodo->siguiente= pila;
    void agregar_pila(nodo *&pila, int ndato){
        nodo *nuevo_nodo = new nodo();
        nuevo_nodo->dato=n;
        nuevo_nodo->siguiente= pila;
    }
4. Asignar el nuevo nodo
    pila= nuevo_nodo;*/

//ejemplo de funcion para agregar a pilas
void agregar_pila(nodo *&pila, int ndato){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente= pila;
    pila= nuevo_nodo;
}
//ejemplo de funcion para sacar de pilas
void sacar_pila(nodo *&pila, int &ndato){
    nodo *aux = pila;   //variable aux para ayudarno a identificar el nodo que se va a eliminar
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}