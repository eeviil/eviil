#include <stdio.h>

int main()
{
    int x;
    int y=2;
    int ok=0;
    
    printf("inserire il numero: ");
    scanf("%d", &x);
    
    while(y<x)
    { 
        if(x%y == 0)
        {
            printf("ïl numero inserito non è un numero primo\n");
            ok=1;

            break;
        }
        y=y+1;
        
        if (ok == 0)
        {
             printf("ïl numero inserito è un numero primo\n");
        }
    }

}