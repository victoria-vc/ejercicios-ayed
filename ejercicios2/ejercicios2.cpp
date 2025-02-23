#include "ejercicios2.hpp"

// -------------------- PERMITIDAS USAR EN LOS PARCIALES DEL CURSO -------------------- //
// listas
void mostrar(Nodo* lista){
	 Nodo* aux = lista;
	 
	 while(aux != NULL) {
	   cout << aux->info << endl;
	   aux = aux->sig;
	 }
}

void mostrar_eliminandoNodo(Nodo* lista){
	while(lista){
		cout << pop(lista);
	}
	return;
}

void liberar(Nodo*& lista){
	while(lista){
		pop(lista);
	}
	return;
}

Nodo* buscar(Nodo* lista, int v){
	Nodo* aux = lista;
	
	while(aux != NULL && aux->info != v){
		aux = aux->sig;		
	}
	
	return aux;
}

void eliminarNodo(Nodo*& lista, int v){
	Nodo* aux = lista;
	Nodo* ant = NULL;
	while(aux != NULL && aux->info != v){
		ant = aux;
		aux = aux->sig;		
	}
	if(ant != NULL){
		ant->sig = aux->sig;
	} else {
		lista = aux->sig;
	}
	
	delete aux;
}

Nodo* insertarOrdenado(Nodo*& lista, int v){
	Nodo* nuevo = new Nodo();
	nuevo->info = v;
	nuevo->sig = NULL;
	Nodo* aux = lista;
	Nodo* ant = NULL;
	while(aux != NULL && aux->info <= v){
		ant = aux;
		aux = aux->sig;
	}
	if(ant != NULL){
		ant->sig = nuevo;
	} else {
		lista = nuevo;
	}
	nuevo->sig = aux;
	
	return nuevo;
}
Nodo* insertaPrimero(Nodo*& l, int x){
    Nodo* p = new Nodo();
    p->info = x;
    p->sig = l;
    l = p;
    return p;
}

Nodo* insertarAlFinal(Nodo*& l, int x){
    Nodo* nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (l == NULL) {
        l = nuevo;
    } else {
        Nodo* aux = l;
        while (aux->sig != NULL) {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
    return nuevo;
}

Nodo* insertarSinRepetir(Nodo*& lista, int v){
	Nodo* x = buscar(lista, v);
	if(x == NULL){
		x= insertarOrdenado(lista, v);
	}
	return x;
}

//pilas
void push(Nodo*& pila, int valor){
	Nodo* nuevo = new Nodo();
	nuevo->info = valor;
	nuevo->sig = pila;
	pila = nuevo;
}

int pop(Nodo*& pila){
	int retorno = pila->info;
	Nodo* aux = pila;
	pila = pila->sig;
	delete aux;
	return retorno;
}

// colas
void encolar(Nodo*& colafte, Nodo*& colafin, int v){
	Nodo* nuevo = new Nodo();
	nuevo->info = v;
	nuevo->sig = NULL;
	if(colafte == NULL){
		colafte = nuevo;
	} else{
		colafin->sig = nuevo;
	}
	colafin = nuevo;
};


int desencolar(Nodo*& colafte, Nodo*& colafin){
	int retorno = colafte->info;
	Nodo* aux = colafte;
	colafte = colafte->sig;
	if(colafte == NULL){
		colafin = NULL;
	}
	delete aux;
	return retorno;
}
// ----------------------------------------------------------------------------------- //

// --------------------------------- DEMÁS FUNCIONES --------------------------------- //
void agregarNodo(Nodo*& lista, int x){
	
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	nuevo->sig = NULL;
	
	if(lista == NULL){
		lista = nuevo;
	} else{
		Nodo* aux = lista;
		while(aux->sig != NULL){
			aux = aux->sig;	
		}
		aux->sig = nuevo;	
	}
}

int eliminarPrimerNodo(Nodo*& lista){
	int retorno = lista->info;
	Nodo* aux = lista;
	lista = lista->sig;
	delete aux;
	return retorno;
}

void ordenar(Nodo*& lista){
	Nodo* aux = NULL;
	int x;
	while(lista != NULL){
		x = eliminarPrimerNodo(lista);
		insertarOrdenado(aux,x);
	}
	lista = aux;
}

Nodo* buscaEInsertaOrdenado(Nodo*& lista, int v, bool& enc){
	enc = false;
	Nodo* nodoBuscado = buscar(lista, v);
	if(nodoBuscado != NULL){
		enc = true;
	} else{
		nodoBuscado = insertarOrdenado(lista,v);
	}
	return nodoBuscado;
}
// ----------------------------------------------------------------------------------- //

// Ejercicio 2 (de parcial)
void inicializar_comunas(Comuna comunas[], int size){
    for(int i=0; i<size; i++){
        comunas[i].total_envios = 0;
        comunas[i].lista = NULL;
    }
}

void agregar_pedido(NodoLista*& lista, Pedido pedido){
    NodoLista* nuevo = new NodoLista();
    nuevo->info = pedido;
    nuevo->sig = NULL;

    if(lista == NULL){
        lista = nuevo;
    } else {
        NodoLista* aux = lista;
        while(aux->sig !=NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

void agregar_envio(Comuna comunas[], Pedido pedido, int numero_comuna){
    agregar_pedido(comunas[numero_comuna - 1].lista, pedido);
    comunas[numero_comuna - 1].total_envios++;
}

bool quitarPrimero(NodoLista*& lista, Pedido& p){
    if(lista == NULL){
        return false;
    }
    NodoLista* aux = lista;
    p = aux->info;
    lista = aux->sig;
    delete aux;
    return true;
}

void vaciar_listas(Comuna comunas[], int size, const char* nombre_archivo){
    FILE* archivo = fopen("archivo.dat", "wb");
    for (int i=0; i<size; i++){
        if(comunas[i].total_envios > 0){
            Pedido p;
            while(quitarPrimero(comunas[i].lista, p)){
                fwrite(&p, sizeof(Pedido), 1, archivo);
            }
            comunas[i].total_envios = 0; // reseteamos el contador de envíos
        }
    }
    fclose(archivo);
}

// Ejercicio 3
char insertarEnTerceraPosicion(Nodo*& pila, int valor){
    Nodo* tempPila = NULL;
    int counter = 0;

    // Sacar elementos hasta alcanzar la tercera posición o hasta que la pila esté vacía
    while (pila != NULL && counter < 2) {
        push(tempPila, pop(pila));
        counter++;
    }

    if (counter < 2) {
        // No hay suficientes elementos en la pila
        // Restaurar la pila original
        while (tempPila != NULL) {
            push(pila, pop(tempPila));
        }
        return 'N';
    }

    // Insertar el nuevo valor en la pila original
    push(pila, valor);

    // Restaurar los elementos guardados en la pila temporal
    while (tempPila != NULL) {
        push(pila, pop(tempPila));
    }

    return 'S';
}

// Ejercicio 5 (de parcial)
void cargarEstructura(FILE* f, matriz mat[][31], archivo ejemplos[], int cantidad){
	for(int k=0; k<cantidad; k++){
		insertarOrdenado(mat[ejemplos[k].num_sector - 1][ejemplos[k].dia - 1].lista, ejemplos[k]);
	}
}

void mostrarGastos(matriz mat[][31]){
	for(int i=0; i<15; i++){
		cout << "SECTOR " << i+1 << ": " << endl;
		for(int j=0; j<31; j++){
			cout << "DIA " << j+1 << ": " << endl;
			nodo* aux = mat[i][j].lista;
			while(aux != NULL){
				cout << "Detalle: " << aux->info.detalle << endl;
				cout << "Importe: " << aux->info.importe << endl;
				aux = aux->sig;
			}
		}
	}
}
void mayorGasto(matriz mat[][31]){
	int sector_mayor = 0;
	int dia_mayor = 0;
	float mayor = 0;

	for(int i=0; i<15; i++){
		for(int j=0; j<31; j++){
			nodo* aux = mat[i][j].lista;
			while(aux != NULL){
				if(aux->info.importe > mayor){
					mayor = aux->info.importe;
					sector_mayor = i + 1;
					dia_mayor = j + 1;
				}
				aux = aux->sig;
			}
		}	
	}
	cout << "El mayor gasto se realizó en el sector " << sector_mayor << " en el día " << 
	dia_mayor << " con un importe de " << mayor << endl;
}

nodo* insertarOrdenado(nodo*& lista, archivo arch){
	nodo* nuevo = new nodo();
	strcpy(nuevo->info.detalle, arch.detalle);
	nuevo->info.importe = arch.importe;
	nuevo->sig = NULL;

	nodo* aux = lista;
	nodo* ant = NULL;
	while(aux != NULL && aux->info.importe > arch.importe){
		ant = aux;
		aux = aux->sig;
	}
	if(ant != NULL){
		ant->sig = nuevo;
	} else {
		lista = nuevo;
	}
	nuevo->sig = aux;

	return nuevo;
}

// Ejercicio 7 (de parcial)
void cargarEstructura(FILE*& f, vector v[]){

	int indice;
	archivoDoc arch;
	tipoActividad act;

	while(fread(&arch, sizeof(archivoDoc), 1, f)){
		indice = arch.legajo-500;
		strcpy(v[indice].nombre, arch.nombre);
		v[indice].contador++;
		if(arch.entorno == 1){
			v[indice].entorno = 'S';
		}
		strcpy(act.nombre_actividad, arch.nombre_actividad);
		insertarSinRepetir(v[indice].lista, act); 
	}
}

void realizarInforme(vector v[]){

	tipoActividad act;

	for(int i=0; i<35; i++){
		cout <<"Docente " << i+500 << endl;
		cout << "sus actividades son: " << endl;
		while(v[i].lista != NULL){
			act = pop(v[i].lista);
			cout << act.nombre_actividad << endl;
		}
		cout << "Cantidades de actividades: " << v[i].contador << endl;
		if(v[i].entorno == 'S'){
			cout << v[i].nombre << endl;
		}
	}
}

void insertarSinRepetir(NodoDocente*& lista, tipoActividad act){
	NodoDocente* x = buscar(lista, act);
	if(x == NULL){
		insertarOrdenado(lista, act);
	}
}

NodoDocente* buscar(NodoDocente* lista, tipoActividad act){
	NodoDocente* aux = lista;
	
	while(aux != NULL && strcmp(aux->info.nombre_actividad, act.nombre_actividad) != 0){
		aux = aux->sig;		
	}
	
	return aux;
}

void insertarOrdenado(NodoDocente*& lista, tipoActividad act){
	NodoDocente* nuevo = new NodoDocente();
	strcpy(nuevo->info.nombre_actividad, act.nombre_actividad);
	nuevo->sig = NULL;

	NodoDocente* aux = lista;
	NodoDocente* ant = NULL;
	while(aux != NULL && strcmp(aux->info.nombre_actividad, act.nombre_actividad) < 0){
		ant = aux;
		aux = aux->sig;
	}
	if(ant != NULL){
		ant->sig = nuevo;
	} else {
		lista = nuevo;
	}
	nuevo->sig = aux;
}

tipoActividad pop(NodoDocente*& lista){
	NodoDocente* aux = lista;
	tipoActividad info = lista->info;
	lista = lista->sig;
	delete aux;
	return info;
}
