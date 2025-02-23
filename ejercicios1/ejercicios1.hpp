#ifndef EJERCICIOS1_H
#define EJERCICIOS1_H

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

// Ejercicio 12 (forma 1)
struct persona1{
    char nombre[10];
    int fecha_nacimiento; // AAAAMMDD
};

void calcular_edad(persona1 personas[], int cant);

// Ejercicio 12 (forma2)
struct persona2{
    char nombre[40];
    char fecha_nacimiento[9]; // AAAAMMDD
};

// Ejercicio 14
struct contenedor{
    int id;
    int peso;
    int puerto; // 1,2,3
};

// Ejercicio 15
float calcularPorcentajeDiferencia(int A, int B);

// Ejercicio 16
string Tendencia(int AA, int BB);

// Ejercicio 20
struct alumno{
    int legajo; // 8 dígitos
    int notas[2]; //notas de 2 parciales
    float promedio;
};

// Ejercicio 21
struct registro_precios{
    int num_articulo;
    char desc_articulo[20];
    float precioXunidad;
    int cantidad_stock;
    int num_proveedor;
};

void ordenar_precios (registro_precios precios[], int len);
void imprimir_precios(registro_precios precios[], int len);




#endif