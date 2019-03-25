#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero");
    scanf("%d", &numeroUno);
    printf("Ingrese otro numero");
    scanf("%d", &numeroDos);

    resultado = sumar(numeroUno, numeroDos);

    printf("El resultado es: %d", resultado);


}

int sumar(void)
{
    int resultado;

    resultado = numeroU + numeroD;
    return resultado;
}
