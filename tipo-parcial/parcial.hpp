#ifndef PARCIAL_H
#define PARCIAL_H

#include <iostream>
#include <cstring>

using namespace std;

struct Nodo{
	int info;
	Nodo* sig;
};

/* Ejercicio de parcial 1

struct Nodo{
    int legajo; // legajo porque es un solo campo
    Nodo* sig;
};

struct registro{
    int regional;
    int carrera;
    int legajo;
};

struct tMatriz{
    int cantidad;
    Nodo* lista;
}; */

//listas
void agregarNodo(Nodo*& lista, int x);
void mostrar(Nodo* lista);
void liberar(Nodo*& lista);
Nodo* buscar(Nodo* lista, int v);
void eliminar(Nodo*& lista, int v);
int eliminarPrimerNodo(Nodo*& lista);
Nodo* insertarOrdenado(Nodo*& lista, int v);
void ordenar(Nodo*& lista);
Nodo* buscaEInsertaOrdenado(Nodo*& lista, int v, bool& enc);
Nodo* insertaPrimero(Nodo*& l, int x);
Nodo* insertarAlFinal(Nodo*& l, int x);
//pilas
void push(Nodo*& pila, int valor);
int pop(Nodo*& pila);
//Colas
void encolar(Nodo*& colafte, Nodo*& colafin, int v);
int desencolar(Nodo*& colafte, Nodo*& colafin);

// Ejercicio de parcial 2

struct Pedido{
    char direccion[100+1];
    char dni[12];
    char palabra_clave[15];
};

struct NodoLista{
    Pedido info;
    NodoLista* sig;
};

struct Comuna{
    int total_envios;
    NodoLista* lista;
};

void inicializar_comunas(Comuna comunas[], int size);
void agregar_pedido(NodoLista*& lista, Pedido pedido);
void agregar_envio(Comuna comunas[], Pedido pedido, int numero_comuna);
bool quitarPrimero(NodoLista*& lista, Pedido& p);
void vaciar_listas(Comuna comunas[], int size, const char* nombre_archivo);



#endif
