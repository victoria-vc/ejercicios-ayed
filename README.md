## Ejercicios del aula virtual - Curso de verano 2025 (PARTE 1)  
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

## Ejercicios del aula virtual - Curso de verano 2025 (PARTE 2)    
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
3. Dada una pila y un valor X colocar el valor X en la tercera posicion de la pila, retornando un parámetro con valor 'S' o 'N' según haya sido exitoso o no el requerimiento. (Definir parámetros y codificar).  
4. Una consultora desea hacer una estadística sobre los cortes de luz en el país a lo largo del año. Para ello cuenta con un archivo (cortes.dat) con los siguientes datos:  
		-Hora inicial de corte (hhmm)  
		-Hora final de corte (hhmm)  
		- ID de subestación  
		-Día  
		-Mes  
		-ID de localidad sin orden  
Se cuenta con:  
Un vector de localidades completo ordenado por ID de localidad (PUP) con los siguientes datos:  
		-Nombre de localidad  
		-Cantidad de habitantes  
A efectos de esta solución se debe considerar que todos los registro de corte se dan dentro del día registrado, es decir, no hay cortes que comiencen un día y terminen en otro.  
Se solicita emitir un listado con los siguientes datos:  
-Mes  
-Cantidad de horas promedio de corte por mes  
-Localidad (nombre)  
-Total de horas de cortes  
-Unidades de la multa  
Se pide:  
 - Declarar todas las estructuras necesarias para resolver la impresión del listado (2 puntos)  
 - Imprimir el listado tal como se detalla arriba ordenado por MES y LOCALIDAD con el promedio de horas de corte para cada mes y calcular el importe de multa de localidad considerando que menos de 3 horas no se calculan, entre 3 y 6 se calculan a razón de 8 unidades de multa la hora, y más de 6 se calculan a razón de 12 unidades cada hora. Por ejemplo 3 horas de corten suman 24 unidades de multa y 8 horas sumarían 96.  
Nota: para imprimir el listado debe resolver el problema desarrollando funciones con los parámetros que considere adecuados.  
Puede utilizar funciones de biblioteca, siempre que respete las firmas que se enseñaron en clase.  
Emitir listado con totales correctos (4 puntos)    
Lógica adecuada para el cálculo de multas (4 puntos)    
5. Se quiere almacenar en memoria los gastos efectuados por cada uno de los 15 sectores de una empresa en un mes determinado para realizar un análisis estadístico.  
Para ello se implementará una matriz de listas, donde las filas representan los sectores y las columnas los días y cada elemento es la lista con cada gasto de ese sector en ese día.  
Los datos para armar la estructura se encuentran en el archivo de datos binario "Gastos.dat", donde cada registro representa un gasto efectuado y tiene:  
		-Número de sector (de 1 a 15)  
		-Día del mes (de 1 a 31)  
		-Detalle  
		-Importe gastado  
El archivo no está ordenado y puede tener varios gastos realizados por un mismo sector.  
- Función cargarEstructura debe generar la estructura en memoria con los datos del archivo, tener en cuenta que la estructura hay que realizarla en las otras funciones.  (2 puntos)  
- Función mostrasGastos debe mostrar por pantalla el siguiente listado: (5 puntos)  
Sector 1  
	Día 1  
		...  (detalle e importe de cada gasto)  
		...  
	Día 2
		...  
Sector 2  
		...  
Detalle e importe de cada gasto (ordenado de mayor a menor por importe) agrupado por sector y día.  
- Función mayorGasto debe mostrar qué sector y qué día se realizó el mayor gasto (suponer único) (3 puntos)   
6. ((falta enunciado)) 
7. En la colonia de vacaciones "verano divertido" desean hacer una estadística con las actividades realizadas a lo largo del verano. La colonia cuenta con 35 docentes para sus diversas actividades.
Se cuenta con un archivo "vacaciones.dat" sin orden con el detalle de las actividades realizadas.
	-Nombre de docente (hasta 60 caracteres)
	-Legajo del docente (numérico consecutivo inicia en 500)
	-Nombre de la actividad (hasta 60 caracteres)
	-Edad tope
	-Cantidad máxima de niños
	-Entorno (acuático/parque/interior) [1..3]
	-Uso de elementos (si/no)
	-Fecha (MMDD)
Considere que los docentes se repiten ya que cada uno pudo haber realizado muchas actividades en diferentes días.
Usted deberá informar:
 - Lista de las actividades realizadas por CADA DOCENTE, sin repetición y ordenadas por docente/actividad.
 - Cantidad de actividades realizadas por cada docente en total en todo el periodo de la colonia.
 - Nombre de los docentes que realizaron al menos una actividad en entorno acuático.
Se pide:
 - Codifique la declaración de todas las estructuras de datos. (2 puntos)
 - Codifique la función cargarEstructuras que reciba como parámetro lo que usted estume necesario (sin usar variables globales) y cargue los datos recibidos preparándolos del modo más adecuado para poder listar los datos solicitados. (3 puntos)
 - Codigique la función realizarInforme que utilizando la estructura que genera la función del punto anterior imprima por pantalla la información solicitada. (5 puntos)
Puede utilizar las funciones que necesite -> insertarOrdenado(), insertarSinRepetir(), pop(), push(), encolar(), desencolar(), etc. 