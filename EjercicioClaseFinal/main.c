#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);
int aprobarMateria(int notaMinima, int nota);
void ejerciciouno(void);

int main()
{
    int resultado;
    int aprobo;
    int noAprobo;
    resultado = pedirNota();

    aprobo = aprobarMateria(6,2);
    noAprobo = aprobarMateria(6,8);
    printf("La nota final es: %d", resultado);
    printf()
}

int pedirNota()
{
    int notaIngresada;

    do
    {
     printf("Ingrese la nota");
     scanf("%d", &notaIngresada);

    }while(notaIngresada<0||notaIngresada>10);

    return notaIngresada;
}

int aprobarMateria()
{
    if(nota>notaMinima)
        {
            return 1;
        }
        else
        {
            return 0;
        }


}

void ejerciciouno()
{


}


