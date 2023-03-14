#include <stdio.h>

int main()
{
    int x; 
    int y; 
    int z;
     
    printf("inserisci dei numeri per verificare che possano comporre un triangolo: ");
    scanf("%d, %d, %d", &x, &y, &z);

    if((x+y>z)&&(x+z>y)&&(y+z>x))
    {
    printf("congratulazioni! hai scoperto un triangolo. appena 3000 anni in ritardo!\n");
    }
    else
    {
    printf("non è un triangolo! credo che il tuo sia un primato tbh\n");
    } 
}