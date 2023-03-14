#include <stdio.h>

int main()
{
    char sesso;
    printf("in che genere ti identifichi? *inserisci F, M o N*  ");
    scanf(" %c", &sesso);

    if (sesso == 'F')
    {
        printf("FEMALE\n");
    }
    else if (sesso == 'M')
    {
        printf("MALE\n");
    }
    else if(sesso == 'N')
    {
        printf("NON-BINARY\n");
    }
    else 
    {
        printf("errore, carattere non valido. inserire F, M o N");
    }


}