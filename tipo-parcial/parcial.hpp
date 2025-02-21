#ifndef PARCIAL_H
#define PARCIAL_H

#include <iostream>
#include <cstring>

using namespace std;

// Ejercicio de parcial 1

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
};

Nodo* insertarOrdenado(Nodo*& lista, int legajo);
int pop(Nodo*& lista);

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
