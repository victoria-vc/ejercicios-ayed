#include "ejercicios2.hpp"

void agregarNodo(Nodo*& lista, int x){
	
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	nuevo->sig = NULL;
	
	if(lista == NULL){
		lista = nuevo;
	} else{
		Nodo* aux = lista;
		while(aux->sig != NULL){
			aux = aux->sig;	
		}
		aux->sig = nuevo;	
	}
}

void mostrar(Nodo* lista){
	 Nodo* aux = lista;
	 
	 while(aux != NULL) {
	   cout << aux->info << endl;
	   aux = aux->sig;
	 }
}

void mostrar_eliminandoNodo(Nodo* lista){
	while(lista){
		cout << pop(lista);
	}
	return;
}


void liberar(Nodo*& lista){
	while(lista){
		pop(lista);
	}
	return;
}

Nodo* buscar(Nodo* lista, int v){
	Nodo* aux = lista;
	
	while(aux != NULL && aux->info != v){
		aux = aux->sig;		
	}
	
	return aux;
}

void eliminarNodo(Nodo*& lista, int v){
	Nodo* aux = lista;
	Nodo* ant = NULL;
	while(aux != NULL && aux->info != v){
		ant = aux;
		aux = aux->sig;		
	}
	if(ant != NULL){
		ant->sig = aux->sig;
	} else {
		lista = aux->sig;
	}
	
	delete aux;
}

int eliminarPrimerNodo(Nodo*& lista){
	int retorno = lista->info;
	Nodo* aux = lista;
	lista = lista->sig;
	delete aux;
	return retorno;
};

Nodo* insertarOrdenado(Nodo*& lista, int v){
	Nodo* nuevo = new Nodo();
	nuevo->info = v;
	nuevo->sig = NULL;
	Nodo* aux = lista;
	Nodo* ant = NULL;
	while(aux != NULL && aux->info <= v){
		ant = aux;
		aux = aux->sig;
	}
	if(ant != NULL){
		ant->sig = nuevo;
	} else {
		lista = nuevo;
	}
	nuevo->sig = aux;
	
	return nuevo;
}

void ordenar(Nodo*& lista){
	Nodo* aux = NULL;
	int x;
	while(lista != NULL){
		x = eliminarPrimerNodo(lista);
		insertarOrdenado(aux,x);
	}
	lista = aux;
}

Nodo* buscaEInsertaOrdenado(Nodo*& lista, int v, bool& enc){
	enc = false;
	Nodo* nodoBuscado = buscar(lista, v);
	if(nodoBuscado != NULL){
		enc = true;
	} else{
		nodoBuscado = insertarOrdenado(lista,v);
	}
	return nodoBuscado;
}

Nodo* insertarSinRepetir(Nodo*& lista, int v){
	Nodo* x = buscar(lista, v);
	if(x == NULL){
		x= insertarOrdenado(lista, v);
	}
	return x;
}

//pilas
void push(Nodo*& pila, int valor){
	Nodo* nuevo = new Nodo();
	nuevo->info = valor;
	nuevo->sig = pila;
	pila = nuevo;
}

int pop(Nodo*& pila){
	int retorno = pila->info;
	Nodo* aux = pila;
	pila = pila->sig;
	delete aux;
	return retorno;
}

//colas
void encolar(Nodo*& colafte, Nodo*& colafin, int v){
	Nodo* nuevo = new Nodo();
	nuevo->info = v;
	nuevo->sig = NULL;
	if(colafte == NULL){
		colafte = nuevo;
	} else{
		colafin->sig = nuevo;
	}
	colafin = nuevo;
};


int desencolar(Nodo*& colafte, Nodo*& colafin){
	int retorno = colafte->info;
	Nodo* aux = colafte;
	colafte = colafte->sig;
	if(colafte == NULL){
		colafin = NULL;
	}
	delete aux;
	return retorno;
}


Nodo* insertaPrimero(Nodo*& l, int x){
    Nodo* p = new Nodo();
    p->info = x;
    p->sig = l;
    l = p;
    return p;
}

Nodo* insertarAlFinal(Nodo*& l, int x){
    Nodo* nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (l == NULL) {
        l = nuevo;
    } else {
        Nodo* aux = l;
        while (aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
    return nuevo;
}

// Ejercicio 2
void inicializar_comunas(Comuna comunas[], int size){
    for(int i=0; i<size; i++){
        comunas[i].total_envios = 0;
        comunas[i].lista = NULL;
    }
}

void agregar_pedido(NodoLista*& lista, Pedido pedido){
    NodoLista* nuevo = new NodoLista();
    nuevo->info = pedido;
    nuevo->sig = NULL;

    if(lista == NULL){
        lista = nuevo;
    } else {
        NodoLista* aux = lista;
        while(aux->sig !=NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void agregar_envio(Comuna comunas[], Pedido pedido, int numero_comuna){
    agregar_pedido(comunas[numero_comuna - 1].lista, pedido);
    comunas[numero_comuna - 1].total_envios++;
}

bool quitarPrimero(NodoLista*& lista, Pedido& p){
    if(lista == NULL){
        return false;
    }
    NodoLista* aux = lista;
    p = aux->info;
    lista = aux->sig;
    delete aux;
    return true;
}

void vaciar_listas(Comuna comunas[], int size, const char* nombre_archivo){
    FILE* archivo = fopen("archivo.dat", "wb");
    for (int i=0; i<size; i++){
        if(comunas[i].total_envios > 0){
            Pedido p;
            while(quitarPrimero(comunas[i].lista, p)){
                fwrite(&p, sizeof(Pedido), 1, archivo);
            }
            comunas[i].total_envios = 0; // reseteamos el contador de envíos
        }
    }
    fclose(archivo);
}

// Ejercicio 3
char insertarEnTerceraPosicion(Nodo*& pila, int valor){
    Nodo* tempPila = NULL;
    int counter = 0;

    // Sacar elementos hasta alcanzar la tercera posición o hasta que la pila esté vacía
    while (pila != NULL && counter < 2) {
        push(tempPila, pop(pila));
        counter++;
    }

    if (counter < 2) {
        // No hay suficientes elementos en la pila
        // Restaurar la pila original
        while (tempPila != NULL) {
            push(pila, pop(tempPila));
        }
        return 'N';
    }

    // Insertar el nuevo valor en la pila original
    push(pila, valor);

    // Restaurar los elementos guardados en la pila temporal
    while (tempPila != NULL) {
        push(pila, pop(tempPila));
    }

    return 'S';
}