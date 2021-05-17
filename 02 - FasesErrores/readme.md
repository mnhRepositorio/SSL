# Fases de la Traducción y Errores
## Secuencia de Pasos
### 1. Preprocesador
Esta es la primera etapa del proceso de compilación donde se expanden las directivas del preprocesador (las macros y los archivos de encabezado son los más comunes). Para realizar este paso, se ejecuta el siguiente comando: 
gcc -E hello.c -std=c11 -o hello.i 

- **a. Escribir hello2.c, que es una variante de hello.c**

- **b. Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su contenido. ¿Qué conclusiones saca?**
Agrega al encabezado del archivo las definiciones de las macros, las constantes, 
las declaraciones de funciones de la biblioteca estándar del lenguaje de programación C para hacer operaciones, 
estándar, de entrada y salida, así como la definición de tipos necesarias para dichas operaciones.

- **c. Escribir hello3.c, una nueva variante**

- **d. Investigar e indicar la semántica de la primera línea.**
La función genera texto formateado, bajo el control del formato y cualquier argumento adicional, y escribe cada carácter generado en el flujo de salida estándar. 
Devuelve el número de caracteres generados o devuelve un valor negativo si la función establece el indicador de error para la secuencia.

- **e. Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias entre hello3.c y hello3.i.**
No encuentro diferencias.

### 2. Compilación
En esta fase tiene lugar la compilación propiamente dicha. El compilador traduce hello.i en hello.s. El archivo hello.s contiene código ensamblador. Se puede decir explícitamente gcc para traducir hello.i a hello.s ejecutando el siguiente comando.

gcc -S hello.i -std=c11 -o hello.s

- **a. Compilar el resultado y generar hello3.s, no ensamblar.**
hello3.c: In function 'main':
hello3.c:4:2: warning: implicit declaration of function 'prontf' [-Wimplicit-function-declaration]
  prontf("La respuesta es %d\n");
  ^~~~~~
hello3.c:4:2: error: expected declaration or statement at end of input

- **b. Corregir solo los errores, no los warnings, en el nuevo archivo hello4.c y empezar de nuevo, generar hello4.s, no ensamblar.**

- **c. Leer hello4.s, investigar sobre el lenguaje ensamblador, e indicar de formar sintética cúal es el objetivo de ese código.**

El lenguaje ensamblador es un programa que permite llevar los códigos de operación y operandos en forma de instrucciones o nemónicos fácilmente entendibles e identificables por el programador a códigos de lenguaje máquina que se presentan con números hexadecimales en memoria.

- **d. Ensamblar hello4.s en hello4.o, no vincular.**
Para esto utilizo el siguiente comando: as hello4.s -o hello4.o

### 3. Vinculación
Esta fase vincula archivos de objeto para producir un archivo ejecutable final. Un archivo ejecutable requiere muchos recursos externos (funciones del sistema, bibliotecas de tiempo de ejecución de C, etc.)

- **a. Vincular hello4.o con la biblioteca estándar y generar el ejecutable.**

hello4.o:hello4.c:(.text+0x1e): undefined reference to "prontf"
collect2.exe: error: ld returned 1 exit status

- **b. Corregir en hello5.c y generar el ejecutable. Solo corregir lo necesario para que vincule.**

- **c. Ejecutar y analizar el resultado.**

### 4. Corrección de Bug
- **a. Corregir en hello6.c y empezar de nuevo; verificar que funciona como se espera.**


### 5. Remoción de prototipo
-**a. Escribir hello7.c, una nueva variante.**
-**b. Explicar porqué funciona.**

No me funciono, tuve que incluir #include <stdio.h> para que funcione

### 6. Compilación Separada: Contratos y Módulos
-**a. Escribir studio1.c (sí, studio1, no stdio) y hello8.c.**

