#include "ejercicios1.hpp"


int main(){
    
cout << "Ejercicio 1:" << endl;

    int a = 10;
    int b = 30;
    int resultado = sumar(a,b);
    cout << resultado << endl;

cout << "Ejercicio 2: " << endl;    

    int fecha;
    cout << "Ingrese fecha AAAAMMDD" << endl;
    cin >> fecha;
    mostrar_fecha_separada(fecha);

cout <<"Ejercicio 3: " << endl;

    int suma_pares = 0;
    for(int i=2; i<= 10000; i++){

        if((i%2)==0){
            suma_pares += i;
        }
    }
    cout << suma_pares << endl;

cout <<"Ejercicio 4: " << endl;

    cout << "Ingrese 3 valores para ver si se forma un triángulo" << endl;
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(((num1+num2) > num3 )&& ((num1+num3) > num2) && ((num3+num2) > num1)){
        cout << "Los tres valores forman un triángulo" << endl;
        }else {
        cout << "No forman un triángulo" << endl; 
        }

cout <<"Ejercicio 5: " << endl;

    int L1, L2, L3;
    cout << "Ingrese los lados de un triángulo" << endl;
    cin >> L1;
    cin >> L2;
    cin >> L3;
    
    if (L1 == L2 && L2 == L3) {
        cout << "Equilátero" << endl;
    } else if (L1 == L2 || L2 == L3 || L2 == L3) {
        cout << "Isósceles" << endl;
    } else {
        cout << "Escaleno" << endl;
    } 

cout <<"Ejercicio 6: " << endl;

    int edad;
    cout << "Ingrese una edad" << endl;
    cin >> edad;
    verificar_edad(edad);

cout <<"Ejercicio 7:" << endl;
    int dis1, dis2;
    int vel1, vel2;
    cout << "Ingrese tiempo en recorrer 1500 m de Tomás" << endl;
    cin >> dis1;
    cout << "Ingrese tiempo en recorrer 1500 m de Camila" << endl;
    cin >> dis2;

    /* si se da el tiempo en minutos (también cambiamos el tipo de dato):
    dis1 = dis1*60;
    dis2 = dis2*60; */

    vel1 = 1500 / dis1;
    vel2 = 1500 / dis2;

    if(vel1 > vel2){
        cout << "El corredor más véloz fue Tomás" << endl;
    } else {
        cout << "El corredor más véloz fue Camila" << endl;
    }

cout << "Ejercicio 8: " << endl;

    // 50 numeros enteros: i=100 i<=125 y i=-35 i<=-10
    int suma1 = 0;
    int suma2 = 0;
    int todo = 0; // (suma1+suma2)/50

    for(int i=100; i<=125; i++){
        suma1 += i;
    }
    for(int i=-35; i<=-10; i++){
        suma2 += i;
    }

    todo = (suma1+suma2)/50;
    cout << todo << endl;

cout << "Ejercicio 9: " << endl; 
    // suponemos que se detectaron menos infracciones
    infraccion registro_infraccion[4] = {{3, "Estafa a clientes", 1000, 'L'}, 
                                        {3, "Pintura no original", 800, 'G'},
                                        {3, "Venta de otros insumos", 1600, 'G'}, 
                                        {4,"Venta de insumos ilegales",6000,'G'}};

    int multa_L = 0;
    int multa_M = 0;
    int multa_G = 0;
    int infracciones_G = 0;
    for(int i=0; i<4; i++){
        if(registro_infraccion[i].gravedad == 'L'){
            multa_L += registro_infraccion[i].valor;
        }
        else if(registro_infraccion[i].gravedad == 'M'){
            multa_M += registro_infraccion[i].valor;
        }
        else if(registro_infraccion[i].gravedad == 'G'){
            multa_G += registro_infraccion[i].valor;
        }
        if(registro_infraccion[i].tipo == 3 || registro_infraccion[i].tipo == 4){
            infracciones_G++;
        }
    }
    // si tiene 3 o 4 de G > 3 clausurar fabrica
    cout << "El valor a pagar de multas con gravedad 'L' es: " << multa_L << endl;
    cout << "El valor a pagar de multas con gravedad 'M' es: "<< multa_M << endl;
    cout << "El valor a pagar de multas con gravedad 'G' es: "<< multa_G << endl;

    if(infracciones_G > 3){
        cout << "Clausurar fábrica" << endl;
    }

cout << "Ejercicio 10: " << endl;

    float sueldo;
    int menos1520 = 0;
    int entre1520y2780 = 0;
    int entre2780y5999 = 0;
    int mas5999 = 0;

    cout << "Ingrese el conjunto de sueldos (0 para finalizar el conjunto)" << endl;

        while(true){
            cin >> sueldo;
            if(sueldo == 0){
                break;
            }
            if(sueldo < 1520){
                menos1520++;
            } else if (sueldo >= 1520 && sueldo < 2780){
                entre1520y2780++;
            } else if (sueldo >= 2780 && sueldo < 5999){
                entre2780y5999++;
            } else {
                mas5999++;
            }
    }

    cout << "Los empleados que ganan menos de $1520 son: " << menos1520 << endl;
    cout << "Los empleados que ganan entre $1520 y $2780 son: " << entre1520y2780 << endl;
    cout << "Los empleados que ganan entre $2780 y $5999: " << entre2780y5999 << endl;
    cout << "Los empleados que ganan más de $5999: " << mas5999 << endl;

cout << "Ejercicio 11: " << endl;

    int valor;
    int valor_mayor = 0;
    int valor_menor = 999999999;
    int posicionMayor = 0;
    int posicionMenor = 0;
    cout << "Ingrese valores" << endl;
    while(true){
        cin >> valor;
        if(valor == 0){
            break;
        }
        if(valor > valor_mayor){
            valor_mayor = valor;
            posicionMayor++;
        }if (valor < valor_menor){
            if(valor == 0){
                break;
            }
            valor_menor = valor;
            posicionMenor++;
        }
    }
    cout << "El mayor número ingresado es: " << valor_mayor << " en la posición: " << posicionMayor << endl;
    cout << "El menor número ingresado es: " << valor_menor << " en la posición: " << posicionMenor << endl;


cout << "Ejercicio 12 (forma 1): " << endl;

    persona1 personas[4] = {{"Tomas", 20040218},{"Marta", 19400302},
                        {"Violeta", 20040119},{"Paula",20010409}};
    calcular_edad(personas, 4);

cout << "Ejercicio 12 (forma 2): " << endl;

    persona2 personaas[100];
    int indice = 0;

    while(true){
        cout << "Ingrese el nombre (o FIN para terminar): ";
        cin >> personaas[indice].nombre;
        if(strcmp(personaas[indice].nombre, "FIN") == 0){
            break;
        }

        cout << "Ingrese la fecha de nacimiento (AAAAMMDD): ";
        cin >> personaas[indice].fecha_nacimiento;
        indice++;
    }

        if(indice == 0){
            cout << "No se ingreso nada"<< endl;
        } 

        persona2 mayor = personaas[0];
        persona2 menor = personaas[0];

        for(int i=1; i<indice; i++){
            if(strcmp(personaas[i].fecha_nacimiento, mayor.fecha_nacimiento) < 0){
                mayor = personaas[i];
            }
            if(strcmp(personaas[i].fecha_nacimiento, menor.fecha_nacimiento) > 0){
                menor = personaas[i];
            }
        }

        cout << "La persona con mayor edad es: " << mayor.nombre << " nacida en la fecha " << mayor.fecha_nacimiento << endl;
        cout << "La persona con menor edad es: " << menor.nombre << " nacida en la fecha " << menor.fecha_nacimiento << endl;

cout << "Ejercicio 13: " << endl;

    int vec_numeros[100];
    int num;
    int num_mayor_neg = -99999999; 
    int num_menor_pos = 99999999; 
    int cantidad_nums = 0;
    float suma_nums = 0;
    float promedio;
    float num_min_rango = 99999999;

        for(int i = 0; i < 100; i++) {
            cout << "Ingrese un numero: ";
            cin >> num;
            if(num == 0) {
                break;
            }
            vec_numeros[i] = num;
            suma_nums += vec_numeros[i];
            cantidad_nums++;

            if(num < 0 && num > num_mayor_neg) {
                num_mayor_neg = num;
            }

            if(num > 0 && num < num_menor_pos) {
                num_menor_pos = num;
            }

            if(num >= -17.3 && num <= 26.9 && num < num_min_rango) {
                num_min_rango = num;
            }
        }

        if(cantidad_nums > 0) {
            promedio = suma_nums / cantidad_nums;

            cout << "El número máximo negativo es: " << num_mayor_neg << endl;
            cout << "El número mínimo positivo es: " << num_menor_pos << endl;
            if(num_min_rango != 99999999) {
                cout << "El número mínimo dentro del rango -17.3 y 26.9 es: " << num_min_rango << endl;
            } else {
                cout << "No hay números dentro del rango -17.3 y 26.9" << endl;
            }
            cout << "El promedio de todos los números es: " << promedio << endl;
        } else {
            cout << "No se ingresaron números válidos." << endl;
        }

cout << "Ejercicio 14: " << endl;

    contenedor contenedores[100] = {{1000,600,1},{1001,800,3},{1002,260,2},{1003,440,1}};
    int peso_total = 0;
    int mayor_peso = 0;
    int id_mayor_peso;
    int cantidad_puerto1 = 0;
    int cantidad_puerto2 = 0;
    int cantidad_puerto3 = 0;

    for(int i=0; i<4; i++){ 
        peso_total += contenedores[i].peso;
        if(contenedores[i].puerto == 1){
            cantidad_puerto1++;
        } else if(contenedores[i].puerto == 2) {
            cantidad_puerto2++;
        } else if(contenedores[i].puerto == 3){
            cantidad_puerto3++;
        }
        if(contenedores[i].peso > mayor_peso){
            mayor_peso = contenedores[i].peso;
            id_mayor_peso = contenedores[i].id;
        }
        
    }
    cout << "El peso total del buque es " << peso_total << "kg" << endl;
    cout << "El contenedor con más peso es el de ID " << id_mayor_peso << endl;
    cout <<"La cantidad de buques al puerto 1 son " << cantidad_puerto1 << endl;
    cout <<"La cantidad de buques al puerto 2 son " << cantidad_puerto2 << endl;
    cout <<"La cantidad de buques al puerto 3 son " << cantidad_puerto3 << endl;

cout << "Ejercicio 15: " << endl;

    int A = 2;
    int B = 4;
    float result;

    result = calcularPorcentajeDiferencia(A, B); 
    cout << result << endl;

cout << "Ejercicio 16: " << endl;
    int AA = 400;
    int BB = 2;

    string tendencia_pantalla;
    tendencia_pantalla = Tendencia(AA, BB);
    cout << tendencia_pantalla << endl;

cout << "Ejercicio 17: " << endl;

    cout << "Ingrese un número mayor a 0 y menor a 30" << endl; // no hacemos validaciones para simplificar
    int numerete;
    cin >> numerete;

    int VEC[numerete];

    for(int i=0; i<numerete; i++){
        VEC[i] = (i + 1) * 2;
        cout << VEC[i] << endl;
    }

cout << "Ejercicio 18: " << endl;

    int N;
    cout << "Ingresar valor entero (<30): ";
    cin >> N;

    int elementos[30];
    cout << "Ingresa " << N << " elementos: " << endl;
    for(int i=0; i<N; i++){
        cin >> elementos[i];
    }

    int ultimo_elemento = elementos[N-1];

    if(ultimo_elemento < 10){
        cout << "Elementos negativos: " << endl;
        for(int i=0; i<N; i++){
            if(elementos[i] < 0){
                cout << elementos[i] << "  " << endl;
            }
        }
    } else { 
        cout << "Demás elementos: " << endl;
        for(int i=0; i<N-1; i++){
            cout << elementos[i] << " " << endl;
        }
    }

cout << "Ejercicio 19: " << endl;

    int valores[100];
    int elemento;
    int valor_minimo = 99999999;
    int posiciones_vm[100];
    int contador_vm = 0;
    long long producto_impares = 1;
    bool hay_impares = false;

    cout << "Ingrese valores " << endl;
    for(int i=0; i<100; i++){
        cin >> valores[i];
        if(valores[i] == 0){
            break;
        }
        if(valores[i] < valor_minimo){
            valor_minimo = valores[i];
            contador_vm = 0;
            posiciones_vm[contador_vm++] = i;;
        }
        if(i%2 == 0 && valores[i]%2 != 0){
            producto_impares *= valores[i];
            hay_impares = true;
        }
    }
    cout << "El valor minimo es " << valor_minimo << " en la/s posición/es:  " << posiciones_vm << endl;
    for(int i=0; i<contador_vm; i++){
        cout << posiciones_vm[i] << " ";
    }

    if(hay_impares){
        cout << "El producto de los elementos impares en posiciones pares es: " << producto_impares << endl;
    } else {
        cout << "No hay números pares en posiciones impares" << endl;
    }

cout << "Ejercicio 20: " << endl;

    int cant_alumnos;

    cout << "Ingrese la cantidad de alumnos que va a cargar" << endl;
    cin >> cant_alumnos;

    alumno al[cant_alumnos];

    cout << "Ingrese datos de los alumnos" << endl;
    for(int i=0; i<cant_alumnos; i++){
        cout << "Legajo: " << endl;
        cin >> al[i].legajo;
            if(al[i].legajo < 0){
                break;
            }
        cout << "Nota de parcial 1: " << endl;
        cin >> al[i].notas[0];
        cout << "Nota de parcial 2: " << endl;
        cin >> al[i].notas[1];
        // promedio por alumno:
        al[i].promedio = (al[i].notas[0] + al[i].notas[1]) / 2.0;
    }
    
    FILE* f = fopen("curso.bin", "wb");

    fwrite(&al, sizeof(alumno), cant_alumnos, f);


        for(int i= 0; i<cant_alumnos; i++){
            cout << "Alumno de legajo: " << al[i].legajo << endl;
            cout << "sus notas: " << al[i].notas[0] << ", " << al[i].notas[1] << endl;
            cout << "y su promedio: " << al[i].promedio << endl;
        }


    fclose(f);



return 0;

}

