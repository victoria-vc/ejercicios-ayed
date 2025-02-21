Ejercicios del aula virtual - Curso de verano 2025   
1. Dados dos valores enteros A y B, informar: la suma, la resta y el producto.  
2. Dado un número entero de la forma (AAAAMMDD), que representa una fecha válida: mostrar el día, mes y año.  
3. Realizar la suma de todos los números pares entre 2 y 10000.  
4. Dado tres valores, determinar e imprimir una leyenda según sea: "Forman un triángulo" o "No forman un triángulo".  
5. Dado un triángulo representado por sus lados L1, L2 y L3, determinar e imprimir una leyenda según sea: "Equilátero", "Isósceles" o "Escaleno".  
6. Se ingresa una edad. Mostrar por pantalla alguna de las siguientes leyendas:  
	-'menor' si la edad es menor o igual a 12  
	-'cadete' si la edad está comprendida entre 13 y 18  
	-'juvenil' si la edad es mayor a 18 y no supera los 26  
	-'mayor' en el caso que no cumpla ninguna de las condiciones anteriores  
7. Calcular la velocidad (metros/segundos) de los participantes de una carrera de 1500m, dado el tiempo en segundos en recorrerla determinar el nombre del más véloz.  
	-¿Y si el tiempo fuese en minutos + segundos?  
8. Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que -10.  
9. Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones.  
De cada infracción se tomó nota de los siguientes datos:  
	-Tipo de infracción (1, 2, 3 o 4)  
	-Motivo de la infracción  
	-Valor de la multa (un entero)  
	-Gravedad de la infracción ('L', 'M' o 'G')  
Se pide informar al final del proceso:  
	-Los valores totales de la multa a pagar de acuerdo al tipo de gravedad  
	-La leyenda "Clausurar fábrica" si la cantidad de infracciones 3 y 4 de gravedad 'G' sean mayor a 3.  
10. Se ingresa un conjunto de valores float, cada uno de los cuales representan el suelo de un empleado, excepto el último valor que es 0 (cero) e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:  
	-Cuántos empleados ganan menos de $1520  
	-Cuántos ganan $1520 o más pero menos de $2780  
	-Cuántos ganan $2780 o más pero menos de $5999  
	-Cuántos ganan $5999 o más  
11. Dados n valores informar el mayor, el menor y en qué posición del conjunto fueron ingresados.  
12. Dado un conjuntos de nombres y fechas de nacimiento (AAAAMMDD), que finaliza con un nombre = "FIN", informar el nombre de la persona con mayor edad y el de la más joven. Utilizar la función strcmp (<cstring>) para evaluar fin de datos.  
13. Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo valores):  
	-El valor máximo negativo  
	-El valor mínimo positivo  
	-El valor mínimo dentro del rango -17.2 y 26.9  
	-El promedio de todos los valores  
14. Un buque de carga traslada 100 contenedores a tres diferentes puertos del país. Los puertos se identifican con los números 1, 2 y 3. De cada contenedor que el buque traslade se registran los siguientes datos:  
	-Identificación del contenedor (entero)  
	-Peso del contenedor en kg (entero)  
	-Puerto de arribo (valor de 1 a 3)  
Se pide calcular e informar:  
	-El peso total que el buque debe trasladar  
	-La identificación del contenedor de mayor peso  
	-La cantidad de contenedores que debe trasladar a cada puerto  
15. Desarrolle la función float calcularPorcentajeDiferencia(int A, int B) que recibe dos valores y retorna el siguiente cálculo: (B - A) * 100 / (A + B)  
16. Desarrolle la función string Tendencia(int A, int B) que dados dos valores A y B, retorna una cadena de acuerdo al siguiente esquema:  
B - A < 0 -> Decreciente  
B - A < 5% de A -> Leve ascenso  
B - A < 2% de A -> Estable  
Resto -> En ascenso  
17. Dado un número N (<30), genere e informe un vector VEC de N elementos que contenga los primeros N números naturales pares.  
18. Ingresar un valor entero N (<30) y a continuación un conjunto de N elementos. Si el último elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás.  
19. Dado un conjunto (<100) de valores enteros de los cuales el último es cero y no debe procesarse:  
    	-Informe el valor mínimo, su posición dentro del conjunto, si el mínimo no es único, informar todas las posiciones donde se encuentre.  
    	-Informe el producto de los elementos impares que ocupen posición par.  
20. Dado un número N (<25), y dos vectores A y B de N elementos que contenga números reales:  
    	-Genere e informe un tercer vector C intercalando los valores de posición impar de A y los valores de posición par de B.  
    	-Genere e informe un tercer vector D donde cada elemento contenga un valor cero si los elementos de una misma posición A y B son iguales, o un valor uno si no lo son.  

Ejercicios tipo parcial  
1. Dadas 20 regionales y 10 carreras de la UTN, y un archivo con los legajos de los alumnos de todas las facultades con los siguientes datos:  
		-ID regional (numéricos de 1 a 20)  
		-ID carrera (numéricos de 1 a 10)  
		-Número de legajo  
Se solicita:  
		-Un listado de los legajos ordenado por regional, carrera, legajo.  
		-Un listado de los legajos ordenado por carrera, regional, legajo.  
En ambos casos mostrar antes de listar la cantidad total de alumnos.  
2. Un centro de distribución logístico de envíos de una plataforma de ventas online debe hacer su sistema para asignar los paquetes recibidos a los motoqueros que repartirán por las 15 distintas comunas de CABA que están  representadas por un vector. La posición 0 del vector corresponde a la comuna 1 y la 14 a la comuna 15. Cada comuna tiene, a lo sumo, dos motoqueros asignados. Considerando esta información, en cada posición hay:
		-Un entero que tiene la cantidad total de envíos ya entregados (se debe inicializar en cero en la declaración)  
		-Dos listas SE de envíos, cada una contiene los envíos que tiene cada motoquero asignado a la comuna y cada envío tiene: dirección de entrega (hasta 100 caracteres), DNI del destinatario (xx.xxx.xxx), palabra clave (hasta 15 caracteres). Ambas listas deben inicializarse vacías en la declaración.  
	a. Declare el vector principal y todos los tipos de datos necesarios para que sea válida la declaración del mismo. (2 puntos)  
	b. Confeccione un procedimiento que reciba el vector, un struct “pedido” y un número de comuna. El   subprograma debe agregar el envío al final de la lista que menos envíos tenga asignados. (4 puntos).  
	c. Realice un procedimiento que reciba el vector principal, la ruta y nombre de un archivo de envíos y   agregue, al final del archivo, todos los envíos de las comunas que tengan todos los envíos entregados  
Luego del proceso, las listas de las comunas en cuestión deben quedar vacías. Puede utilizar el subprograma:  
  
bool quitarPrimero(NodoListaSE *&lista, Pedido &p)  
  
Que quita el primer nodo de la lista, asignando al segundo como primero si hubiera más nodos o dejando la   lista en NULL si se quitara el último nodo. En caso que se haya podido quitar un nodo devuelve true y los   datos de la info del nodo a través del parámetro p. En caso de que no se haya podido quitar un nodo, la   función devuelve false. (4 puntos)  
