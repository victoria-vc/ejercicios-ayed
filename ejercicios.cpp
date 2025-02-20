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

// Ejercicio 12 (forma 1)
void calcular_edad(persona personas[], int cant){
    int fechaMin = 20250219;
    char nombreFMin[10];
    int fechaMax = 1;
    char nombreFMax[10];
    for(int i=0; i<cant; i++){
        if(personas[i].fecha_nacimiento < fechaMin){
            fechaMin = personas[i].fecha_nacimiento;
            strcpy(nombreFMin, personas[i].nombre);
        }
        if(personas[i].fecha_nacimiento > fechaMax){
            fechaMax = personas[i].fecha_nacimiento;
            strcpy(nombreFMax, personas[i].nombre);
        }
    }
    cout << "La persona más vieja es: " << nombreFMin << " ya que nació en la fecha " << fechaMin << endl;
    cout << "La persona más joven es: " << nombreFMax << " ya que nació en la fecha " << fechaMax << endl;
}