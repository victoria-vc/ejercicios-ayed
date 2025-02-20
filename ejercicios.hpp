#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include <iostream>
#include <cstring>


using namespace std;

// Ejercicio 1
int sumar(int a, int b);

// Ejercicio 2
void mostrar_fecha_separada(int fecha);

// Ejercicio 6
void verificar_edad(int edad);

// Ejercicio 9
struct infraccion{
    int tipo; // 1,2,3,4
    string motivo;
    int valor; // $$
    char gravedad; // 'L' 'M' 'G'
};

// Ejercicio 12
struct persona {
    char nombre[10];
    int fecha_nacimiento; // AAAAMMDD
};

void calcular_edad(persona personas[], int cant);





#endif