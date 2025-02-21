#include "ejercicios2.hpp"

int main(){

cout << "Ejercicio 1 (comentado): " << endl; 
    // Comentado porque no está terminado

    /* int i, j, legajo;
    registro r;
    Nodo* aux;

    tMatriz matriz[20][10]; // 20 regionales y 10 carreras

    FILE* f = fopen("universidad.dat", "rb+");

    for(i=0; i<20; i++){
        for(j=0; j<10; j++){
            matriz[i][j].cantidad = 0;
            matriz[i][j].lista = NULL;
        }
    }

    while(fread(&r, sizeof(registro), 1, f)){
        i = r.regional-1;
        j= r.carrera-1;
        matriz[i][j].cantidad++;
        legajo = r.legajo;
        insertarOrdenado(matriz[i][j].lista, legajo);
    }

    // Mostrar por regional, carrera y legajo
    // Tener en cuenta que no vamos a eliminar el nodo en esta primer pasada
    for(i=0; i<20; i++){
        for(j=0; j<10; j++){
            aux = matriz[i][j].lista;
            while(aux != NULL){
                cout << aux->legajo << endl;
                aux = aux->sig;
            }
        }
    }

    // Mostrar por carrera, regional y legajo
    // En este caso, vamos a sacar el nodo porque no lo vamos a necesitar más
    for(i=0; i<20; i++){
        for(j=0; j<10; j++){
            while(matriz[i][j].lista != NULL){
                legajo = pop(matriz[i][j].lista);
                cout << legajo << endl;
            }
        }
    } */

cout << "Ejercicio 2 (de parcial): " << endl;

   /*  Comuna vec[15]; // posición 0 = comuna 1, posición 14 = comuna 15

    inicializar_comunas(vec, 15);

    // Ejemplo para agregar pedidos
    Pedido ped1 = {"Montevideo 329", "45.500.341", "1901"};
    Pedido ped2 = {"Av. San Martín 2803", "45.500.357", "1802"};
    Pedido ped3 = {"Corrientes 90", "30.100.900", "1313"};
    Pedido ped4 = {"Rivadavia 80", "38.200.300", "1414"};

    agregar_envio(vec, ped1, 1);
    agregar_envio(vec, ped2, 2);
    agregar_envio(vec, ped3, 3);
    agregar_envio(vec, ped4, 4);

    // vaciamos listas y escribimos en el archivo
    vaciar_listas(vec, 15, "envios.txt");
    
    cout << "Ejercicio 3: " << endl;
    
    Nodo* pila = NULL;

    push(pila, 4);
    push(pila, 10);
    push(pila, 12);
    push(pila, 8);

    char resultado = insertarEnTerceraPosicion(pila, 2000);
    cout << resultado << endl;

    while(pila != NULL){
        cout << pop(pila) << endl;
        }
 */
cout << "Ejercicio 4 (de parcial): " << endl;
// se solicita emitir un listado con:
// mes, cantidad de hora promedio de corte por mes, localidad (nombre),
// total de horas de corte, unidades de multa

Localidad localidades[4] = {{10, "Salto", 50000},{12, "Gahan", 10000},
                            {14, "Arroyo Dulce", 6000},{16, "Arrecifes", 20000}}; // lo que "tenemos de datos"
Registro reg[10]; // lo que "llega"

FILE* cortes = fopen("cortes.dat", "wb+"); // lo vamos a escribir, pero en el parcial ya estaría con leerlo

reg[0].inicio_corte = 1202;
reg[0].final_corte = 1404;
reg[0].id_subestacion = 2;
reg[0].dia = 02;
reg[0].mes = 04;
reg[0].id_localidad = 10;

reg[1].inicio_corte = 1900;
reg[1].final_corte = 2030;
reg[1].id_subestacion = 4;
reg[1].dia = 10;
reg[1].mes = 10;
reg[1].id_localidad = 12;

reg[2].inicio_corte = 1000;
reg[2].final_corte = 1200;
reg[2].id_subestacion = 8;
reg[2].dia = 20;
reg[2].mes = 11;
reg[2].id_localidad = 14;

reg[3].inicio_corte = 2200;
reg[3].final_corte = 2340;
reg[3].id_subestacion = 10;
reg[3].dia = 28;
reg[3].mes = 12;
reg[3].id_localidad = 16;

// también lo podríamos haber llenado como arreglo vec[10] = {{...},{...}};

fwrite(&reg, sizeof(Registro), 4, cortes);

int cantidad_horas_localidad[4] = {0}; // asumimos 4 localidades
int cantidad_horas_mes[12] = {0};
int unidades_multa[4] = {0};

for(int i=0; i<4; i++){
    int horas_corte = reg[i].final_corte - reg[i].inicio_corte;
    cantidad_horas_localidad[i] += horas_corte;
    cantidad_horas_mes[reg[i].mes -1] += horas_corte;

    if(horas_corte < 3){
        continue; // no se plica la multa
    } else if(horas_corte >= 3 && horas_corte < 6){
        unidades_multa[i] += horas_corte * 8;
    } else if(horas_corte >= 6){
        unidades_multa[i] += horas_corte * 12;
    }
}

for(int mes = 0; mes < 12; mes++){
    if(cantidad_horas_mes[mes] > 0){
        cout << "Mes: " << mes + 1 << ", Promedio de horas de corte: " << cantidad_horas_mes[mes] / 4.0 << endl;
    }
}

for(int i = 0; i < 4; i++){
    cout << "Localidad: " << localidades[i].nombre_localidad << ", Total de horas de cortes: "
     << cantidad_horas_localidad[i] << ", Unidades de multa: " << unidades_multa[i] << endl;
}

cout << "Ejercicio 5 (de parcial): " << endl;

FILE* f = NULL;
matriz mat[15][31] = {};

// llenamos de ejemplo:
archivo ejemplos[] = {
    {1, 1, "Gasto A", 100.0},
    {1, 2, "Gasto B", 200.0},
    {2, 1, "Gasto C", 150.0},
    {2, 3, "Gasto D", 300.0},
    {3, 1, "Gasto E", 250.0},
    {3, 2, "Gasto F", 350.0},
    {4, 1, "Gasto G", 400.0},
    {4, 2, "Gasto H", 500.0}
};



int cantidad = sizeof(ejemplos) / sizeof(ejemplos[0]);

cargarEstructura(f, mat, ejemplos, cantidad);
mostrarGastos(mat);
mayorGasto(mat);
return 0;

}
