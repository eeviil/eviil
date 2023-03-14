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
        if((x == y)&&(y == z)&&(z == x))
        {
            printf("ïl tuo triangolo è equilatero! ci saresti potuto arrivare anche da solo\n");
        }
        else if((x == y)&&(y == z)&&(z != x))
        {
            printf("ïl tuo triangolo è isoscele! non sei la piú brillante delle menti, vero?\n");
        }
        else
        {
            printf("il tuo triangolo è scaleno! unrelated question, hai mai imparato a leggere?\n");
        }
    }
    else
    {
    printf("non è un triangolo! credo che il tuo sia un primato tbh\n");
    }    
}