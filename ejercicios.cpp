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
void calcular_edad(persona1 personas[], int cant){
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

// Ejercicio 15  
float calcularPorcentajeDiferencia(int A, int B){
    float resultado;
    resultado = (((B - A) * 100.0) / (A + B)); // se pone 100.0 para asegurar el cálculo en float
    return resultado;
}

// Ejercicio 16
string Tendencia(int AA, int BB){
    string decreciente = "Decreciente";
    string leve_ascenso = "Leve ascenso";
    string estable = "Estable";
    string en_ascenso = "En ascenso";

    if((BB - AA) < 0){
        return decreciente;
    } else if((BB - AA) < AA * 0.05){
        return leve_ascenso;
    } else if((BB - AA) < AA * 0.02){
        return estable;
    } else {
        return en_ascenso;
    }

    
}

