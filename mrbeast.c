#include <stdio.h> 

int main ()

{
    int età;

    printf("ïnserisci la tua età\n");
    scanf("%d", &età);
    printf("la mia età é: %d anni\n", età);

    if (età > 18)
    { 
        printf("sei maggiorenne, daje\n");
    }
    
    else if (età == 18);
    {
    printf("sei appena diventato maggiorenne! babyslay\n");
    }
    
    else (età < 18);
    {
        printf("non sei maggiorenne, poppante\n");
    }
}