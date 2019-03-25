#include <stdio.h>
#include <stdlib.h>



void main(void)
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero");
    scanf("%d", &numeroUno);
    printf("Ingrese otro numero");
    scanf("%d", &numeroDos);

    resultado = sumar(numeroUno, numeroDos);


    printf("El resultado es %d", resultado);
}


