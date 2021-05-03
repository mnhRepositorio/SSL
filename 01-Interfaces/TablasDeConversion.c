#include "TablasDeConversion.h"
#include <stdio.h>

//Imprime titulo de la tabla
void ImprimirTitulo(char convertidoD[], char convertidoA[]) {
    printf("Tabla de conversion de %s a %s \n \n", convertidoD, convertidoA);//TABLE TITLES !
 }

//Imprime titulo de las columnas.
 void ImprimirTituloTabla(char convertidoD[], char convertidoA[]) {
    printf("%s \t %s \n", convertidoD, convertidoA);
 }