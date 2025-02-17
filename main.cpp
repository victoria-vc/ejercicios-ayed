#include "ejercicios.hpp"


int main(){
    
    cout << "Ejercicio 1:" << endl;

    int a = 10;
    int b = 30;
    int resultado = sumar(a,b);
    cout << resultado << endl;

    cout << "Ejercicio 2:" << endl;

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

return 0;

    
}