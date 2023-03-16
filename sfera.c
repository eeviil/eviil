#include <stdio.h>

int main()
{
    char stringa[]= "";
    int i=0;

    while(1)
    {
        printf("ïnserire testo dela stringa: ");
        scanf("%s", stringa);
        printf("%s\n", stringa);
        
        if((stringa[0]=='S')&&(stringa[1]=='T')&&(stringa[2]=='O')&&(stringa[3]=='P'))
    {
        break;
    }
    }
    
}