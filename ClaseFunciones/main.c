#include <stdio.h>
#include <stdlib.h>

//prototipo
int sumarNumeros(int, int);


int main()//FUNCION PRINCIPAL
{
    int numeroUno;
    int numeroDos;
    int resultado;//no es la misma variable que en la funcion sumarNumeros

    printf("Ingrese un numero");
    scanf("%d", &numeroUno);
    printf("Ingrese otro numero");
    scanf("%d", &numeroDos);

    resultado = sumarNumeros(numeroUno,numeroDos); //VARIABLE QUE LLAMA A LA FUNCION SUMARNUMEROS
    printf("\nEl resultado es:  %d", resultado);

    return 0;
}

int sumarNumeros(int unNumero, int otroNumero)//a veces no hace falta pner los nombres en los parametros, sino solo el tipo de dato
{

    int resultado;
    resultado = unNumero + otroNumero;

    return resultado;


}




