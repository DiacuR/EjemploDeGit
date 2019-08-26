#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dinero;
    char tipo;
    int i;
    int maxImporteDolares;
    int flag = 0;
    float promedioEnPesos;
    int contadorDePesos = 0;
    int acumuladorPesos = 0;
    int porcentajeEnPesos;


    for(i = 0; i < 5; i++)
    {
        printf("\nIngrese moneda: ");
        fflush(stdin);                  //serbuff y fpurge en Linux.
        scanf("%c", &tipo);

        if(tipo == 'd' || tipo == 'p' || tipo == 'b' || tipo == 'l')
        {
            printf("\nIngrese valor: ");
            fflush(stdin);
            scanf("%d", &dinero);



            if(tipo == 'd')
            {
                if(dinero > maxImporteDolares || flag == 0)
                {
                    maxImporteDolares = dinero;
                    flag = 1;
                }
            }
            if(tipo == 'p')
            {
                acumuladorPesos += dinero;
                contadorDePesos++;
            }
        }
        else
        {
            printf("ERROR. Tipo de moneda invalido\n");
        }
    }

    porcentajeEnPesos = contadorDePesos*100/5;

    if(flag == 0)
    {
        printf("\nNo se ingresaron dolares");
    }
    else
    {
        printf("\nMayor importe en dolares: %d", maxImporteDolares);
    }

    promedioEnPesos = ((float)acumuladorPesos)/contadorDePesos;

    printf("\nPromedio en Pesos: %f", promedioEnPesos);

    printf("\nPorcentaje de transacciones hechas en pesos: %d% ", porcentajeEnPesos);

    return 0;
}
