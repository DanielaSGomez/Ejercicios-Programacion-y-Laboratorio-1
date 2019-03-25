#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);
int aprobarMateria(int notaMinima, int nota);

int main()
{
    int resultado;
    int aprobo;
    int noAprobo;
    resultado = pedirNota();
    printf("La nota final es: %d", resultado);
    aprobo = aprobarMateria(6,2);
    noAprobo = aprobarMateria(6,8);

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


