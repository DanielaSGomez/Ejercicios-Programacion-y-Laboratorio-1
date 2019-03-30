#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int sePudo;
    float respuesta;
    int primerNumero;
    int segundoNumero;

    printf("Ingrese el primer numero");
    scanf("%d",&primerNumero);
    printf("Ingrese el segundo numero");
    scanf("%d",&segundoNumero);


    sePudo = dividir(primerNumero,segundoNumero,&respuesta);
    if(sePudo==1)
    {
        printf("La respuesta es %f",respuesta);
    }
    else
    {
        printf("Error");
    }
   /* int divisor;
    int dividendo;
    int resultado;
    int division;

    while(dividir(&divisor,&dividendo,&resultado)==0)
    {
        printf("Error");

    }

    printf("El resultado es: &f", division);
    */



    /*int miEdad;


    while(pedirEdad(&miEdad)==0)
    {
        printf("\nEdad Invalida");//TAMBIEN PUEDO DEJAR LAS SENTENCIAS DEL WHILE VACIO, ME VA A HACER UN BUCLE IGUAL HASTA QUE EL RETORNO SEA 1
    }

    printf("Su edad es %d", miEdad);
    */

    /*
    if(pedirEdad(&miEdad)==1)
    {
        printf("La edad es %d",miEdad);
    }
    else
    {
        printf("Error");
    }
*/


    /*
    repaso();
    int sueldo;

    printf("\n Lugar sueldo %d",&sueldo);//IMPRIMIENDO LA DIRECCION DE MEMORIA
    sueldo = 10000;
    cambiarValor(sueldo);
    printf("\npor valor:  %d",sueldo);
    cambiarReferencia(&sueldo);
    printf("\npor referencia: %d",sueldo);
    */

    return 0;
}
