#include <stdio.h>


int main()

{
int età;

printf("ïn che anno sei nat*? ");
scanf("%d", &età);

if(età == 1969)
{
    printf("sei nat* quando l'uomo è andato sulla luna! tu invece cos'hai fatto per l'umanità?\n");
}
else if(età > 1969)
{
    printf("sei nat* %d anni dopo lo sbarco sulla luna! vedo che non è successo niente di rilevante dal 1969\n", età - 1969);
}
else
{
    printf("sei nat* %d prima dello sbarco sulla luna! eh si, l'umanitá aveva ancora tanto da raggiungere prima del 1969\n", 1969 - età);
}
}
    