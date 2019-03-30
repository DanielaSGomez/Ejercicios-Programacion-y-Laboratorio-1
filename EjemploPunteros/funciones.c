int dividir(int datoUno, int datoDos, float *resultado)//COPIO Y PEGO DE LA BIBLIOTECA LA FUNCION, NO LA ESCRIBO NI INGRESO OTROS DATOS

{
   float aux;//EL AUXILIAR AUNQUE LO CASTEE TIENE QUE SER DEL MISMO TIPO DE *RESULTADO
   int retorno;
   retorno =0;                                          //EN EL PUNTERO GUARDO EL RESULTADO DE LA DIVISION

   if(datoDos!=0)
   {
     aux = (float)datoUno/datoDos;//CASTEO
     *resultado = aux;
     return 1;
   }

    return retorno;


/*
    printf("Ingrese el primer numero");
    scanf("%d",&primerNumero);

    printf("Ingrese el segundo numero");
    if(scanf("%d",&aux)==1)
    {
        if(segundoNumero<=0)

        {
            segundoNumero = aux;
            return 1;
        }

    }*/



    return 1;//si retorna 1 es que supo hacer

}




/*int pedirEdad(int *edad)
{
    int aux;

    int retorno;
    retorno = 0;
    printf("Ingrese su edad");
    //retorna un entero, 0 si no se pudo, 1 si se pudo realizar la operacion
    if(scanf("%d",&aux)==1)
    {
      if(aux>0 && aux<150)//validar edad
      {
          *edad = aux;//le paso a edad la variable aux(su valor)
          retorno = 1;
      }

    }
    return retorno;


}




void repaso(void)
{
    printf("Funcion");

}

int cambiarValor(int dato)//retorna si pudo hacer o no la operacion
{
    dato = 0;
    printf("\n Lugar valor %d",&dato);
}

int cambiarReferencia(int *dato)
{
    *dato = 0;
    printf("\n Lugar referencia: %d",&*dato);
}
*/
