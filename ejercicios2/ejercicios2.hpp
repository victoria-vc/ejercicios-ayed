#ifndef EJERCICIOS2_H
#define EJERCICIOS2_H

#include <iostream>
#include <cstring>

using namespace std;

struct Nodo{
	int info;
	Nodo* sig;
};

// -------------------- PERMITIDAS USAR EN LOS PARCIALES DEL CURSO -------------------- //
// listas
void mostrar(Nodo* lista); 
void mostrar_eliminandoNodo(Nodo* lista); 
void liberar(Nodo*& lista); 
Nodo* buscar(Nodo* lista, int v); 
void eliminarNodo(Nodo*& lista, int v); 
Nodo* insertarOrdenado(Nodo*& lista, int v); 
Nodo* insertaPrimero(Nodo*& l, int x); 
Nodo* insertarAlFinal(Nodo*& l, int x); 
Nodo* insertarSinRepetir(Nodo*& lista, int v); 
// pilas
void push(Nodo*& pila, int valor);
int pop(Nodo*& pila);
// colas
void encolar(Nodo*& colafte, Nodo*& colafin, int v);
int desencolar(Nodo*& colafte, Nodo*& colafin);
// ----------------------------------------------------------------------------------- //

// --------------------------------- DEMÁS FUNCIONES --------------------------------- //
void agregarNodo(Nodo*& lista, int x);
int eliminarPrimerNodo(Nodo*& lista);
void ordenar(Nodo*& lista);
Nodo* buscaEInsertaOrdenado(Nodo*& lista, int v, bool& enc);
// ----------------------------------------------------------------------------------- //


// Ejercicio 1 (de parcial)
struct NodoAl{
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

// Ejercicio 2 (de parcial)
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

// Ejercicio 3
char insertarEnTerceraPosicion(Nodo*& pila, int valor);

// Ejercicio 4 (de parcial)
struct Registro{ // para el archivo "cortes.dat"
    int inicio_corte; // hhmm
    int final_corte; // hhmm
    int id_subestacion;
    int dia;
    int mes;
    int id_localidad;
};

struct Localidad{
    int id_localidad;
    char nombre_localidad[14];
    int cantidad_habitantes;
};

// Ejercicio 5 (de parcial)
struct archivo{
    int num_sector;
    int dia;
    char detalle[31];
    float importe;
};

struct info_lista{
    char detalle[31];
    float importe;
};

struct nodo{
    info_lista info;
    nodo* sig;
};

struct matriz{
    int mayor_gasto;
    nodo* lista;
};

void cargarEstructura(FILE* f, matriz mat[][31], archivo ejemplos[], int cantidad);
void mostrarGastos(matriz[][31]);
nodo* insertarOrdenado(nodo*&, archivo);
void mayorGasto(matriz mat[][31]);

// Ejercicio 6
struct Tarea{
    int id;
    char nombre[20];
};

struct SubTarea{
    Tarea info;
    SubTarea* sig;
};

struct NodoTarea{
    Tarea info;
    NodoTarea* sig;
    SubTarea* lista_sub;
};




#endif 
