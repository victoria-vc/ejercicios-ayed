#include "ejercicios2.hpp"

int main(){

cout << "Ejercicio de parcial 1: " << endl; 
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

cout << "Ejercicio de parcial 2: " << endl; 

    Comuna vec[15]; // posición 0 = comuna 1, posición 14 = comuna 15

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
    return 0;
    
}