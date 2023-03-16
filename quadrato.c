#include <stdio.h>

int main()
{
    char stringa1[]=""; 
    printf("scrivi una parola: ");
    scanf(" %s", stringa1);
    int i=0;
    int a='\0';

while(stringa1[i] != '\0')
    {
       i++;
    }
i=i-1;

while (a<i)
    {   
        stringa1= i-a;
       printf("%c", stringa1);
       a++;       
    }
    
    printf("\n");
    return 0;
    
}