#include "parcial.hpp"

Nodo* insertarOrdenado(Nodo*& lista, int legajo) {
    Nodo* aux = new Nodo();
    aux->legajo = legajo;
    aux->sig = NULL;

    if (lista == NULL || lista->legajo > legajo) {
        aux->sig = lista;
        lista = aux;
    } else {
        Nodo* q = lista;
        while (q->sig != NULL && q->sig->legajo < legajo) {
            q = q->sig;
        }
        aux->sig = q->sig;
        q->sig = aux;
    }
    return aux;
}

int pop(Nodo*& lista) {
    if (lista == NULL) {
        cerr << "Error: intentando hacer pop en una lista vacía." << endl;
        return -1; // valor de error
    }
    int legajoAux;
    Nodo* aux = lista;
    legajoAux = aux->legajo;
    lista = aux->sig;

    delete aux;
    return legajoAux;
}

// Ejercicio de parcial 2
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
    