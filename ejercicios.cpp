#include "ejercicios.hpp"

// Ejercicio 1
int sumar(int a, int b){
    int resultado = a + b;
    return resultado;
}
 
// Ejercicio 2
void mostrar_fecha_separada(int fecha){
    int anio;
    int mes;
    int dia;

    anio = fecha / 10000;
    mes = (fecha / 100) % 100;
    dia = fecha % 100;
    cout << "Dia: " << dia << " Mes: " << mes << " Año: " << anio << endl;

}

// Ejercicio 6
void verificar_edad(int edad){
    if(edad<=12){
        cout << "menor" << endl;
    } else if(edad>13 && edad<18){
        cout << "cadete" << endl;
    } else if(edad>18 && edad<26){
        cout << "juvenil" << endl;
    } else {
        cout << "mayor" << endl;
    }
    
}

