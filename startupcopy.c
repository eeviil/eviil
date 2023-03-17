#include <stdio.h>

int confrontastringa(char str1[], char str2[])
{
    int t = 0;
    while(str1[t] != '\0')
    {
        if(str1[t] != str2[t])
        {
            return(0);
        }
        t++;
    }
    return (1);
}


int main()
{
    char nome[]= "";
    int need;
    

    printf("Ciao! Inserisci il tuo nome: ");
    scanf(" %s", nome);
    printf("Benvenut* %s, di che tipo di servizio desideri usufruire oggi?\n 1 - purificazione dell'acqua\n 2 - generatore di energia sostenibile\n 3 - smaltimento di materiali a rischio biologico\n 4 - impiego di materiali sostenibili per le architetture\n 5 - monitoraggio foreste tramite tecnologie innovative\n 6 - monitoraggio incendi in territori a rischio\n", nome);
    scanf("%i", &need);
    //printf("%c\n", need);
    if(need == 1)
    {
        char x[] = "";
        char srv;
        printf("Stai cercando servizi riguardanti *(1)purificazione dell'acqua* , giusto?\n");
        scanf(" %s", x);
        while(confrontastringa(x, "si"))
        {
            printf("Ok, quale dei seguenti servizi fa al caso tuo?\n a - purificazione di acqua contaminata\n b - desalinizzazione dell'acqua\n c - potabilizzazione dell'acqua\n ");
            scanf(" %c", &srv);
            printf("%c\n", srv);
            if(srv == 'a')
            {
               printf("La startup piú adatta alle tue esigenze è:  PurifiqSRL\n");
               break;
            }       
            else if(srv == 'b')
            {
               printf("La startup piú adatta alle tue esigenze è:  DesalinixSRL\n");
               break;
            }       
            else if(srv == 'c')
            {
               printf("La startup piú adatta alle tue esigenze è:  PotabilixSRL\n");
               break;
            }       
            //else if((srv != 'c')&&(srv != 'b')&&(srv != 'a'))
            //{
              // printf("Ïnvalido, inserire un carattere valido\n");
             //  break;
            else
                printf("Ïnvalido, inserire un carattere valido\n");
        }
        

    }
    else if(need == 2)
    {
        char x[] = "";
        char srv;
        printf("Stai cercando servizi riguardanti *(2)generatore di energia sostenibile* , giusto?\n");
        scanf(" %s", x);
        while(confrontastringa(x, "si"))
        {
            printf("Ok, quale dei seguenti servizi fa al caso tuo?\n a - installazione pannelli fotovoltaici sostenibili\n b - installazione pale eoliche\n");
            scanf(" %c", &srv);
            printf("%c\n", srv);
            if(srv == 'a')
            {
               printf("La startup piú adatta alle tue esigenze è:  FotovoltaixSRL\n");
               break;
            }       
            else if(srv == 'b')
            {
               printf("La startup piú adatta alle tue esigenze è:  PaleEolicheSRL\n");
               break;
            }  
            else
             printf("Ïnvalido, inserire un carattere valido\n");
                         
            
        }
    }
    else if(need == 3)
    {
           char x[] = "";
        char srv;
        printf("Stai cercando servizi riguardanti *(3)smaltimento di materiali a rischio biologico* , giusto?\n");
        scanf(" %s", x);
        while(confrontastringa(x, "si"))
        {
            printf("Ok, quale dei seguenti servizi fa al caso tuo?\n a - smaltimento materiali virali\n b - smaltimento materiali tossici\n c - smaltimento patogeni\n d - smaltimento sostanze bioattive\n");
            scanf(" %c", &srv);
            printf("%c\n", srv);
            if(srv == 'a')
            {
               printf("La startup piú adatta alle tue esigenze è:  VirusKillaSRL\n");
               break;
            }       
            else if(srv == 'b')
            {
               printf("La startup piú adatta alle tue esigenze è:  TossinExSRL\n");
               break;
            }  
            else if(srv == 'c')
            {
               printf("La startup piú adatta alle tue esigenze è:  PatogeniOutSRL\n");
               break;
            }  
            else if(srv == 'd')
            {
               printf("La startup piú adatta alle tue esigenze è:  BioNonActiveSRL\n");
               break;
            }  
                 else
                 printf("Ïnvalido, inserire un carattere valido\n");
            
        }
    }
      else if(need == 4)
    {
        char x[] = "";
        char srv;
        printf("Stai cercando servizi riguardanti *(4)impiego di materiali sostenibili per le architetture* , giusto?\n");
        scanf(" %s", x);
        while(confrontastringa(x, "si"))
        {
               printf("La startup piú adatta alle tue esigenze è:  FotovoltaixSRL\n");
               break;
        } 
    }      
    if(need == 5)
    {
        char x[] = "";
        char srv;
        printf("Stai cercando servizi riguardanti *(5)monitoraggio foreste tramite tecnologie innovative* , giusto?\n");
        scanf(" %s", x);
        while(confrontastringa(x, "si"))
        {
            printf("Ok, quale dei seguenti servizi fa al caso tuo?\n a - monitoraggio livelli deforestazione\n b - monitoraggio flora e fauna locali\n c - monitoraggio dei livelli di umidità\n ");
            scanf(" %c", &srv);
            printf("%c\n", srv);
            if(srv == 'a')
            {
               printf("La startup piú adatta alle tue esigenze è:  DeforestAzioneSRL\n");
               break;
            }       
            else if(srv == 'b')
            {
               printf("La startup piú adatta alle tue esigenze è:  Monitorf&fSRL\n");
               break;
            }       
            else if(srv == 'c')
            {
               printf("La startup piú adatta alle tue esigenze è:  HumiditylvlSRL\n");
               break;
            }       
            
            else
                printf("Ïnvalido, inserire un carattere valido\n");
        }
    }
    if(need == 6)
    {
        char x[] = "";
        char srv;
        printf("Stai cercando servizi riguardanti *(6)monitoraggio incendi in territorii a rischio* , giusto?\n");
        scanf(" %s", x);
        while(confrontastringa(x, "si"))
        {
            printf("Ok, quale dei seguenti servizi fa al caso tuo?\n a - monitoraggio incendi in campagna\n b - monitoraggio incendi montagne\n c - monitoraggio incendi zone abitate\n ");
            scanf(" %c", &srv);
            printf("%c\n", srv);
            if(srv == 'a')
            {
               printf("La startup piú adatta alle tue esigenze è:  FireWarningSRL\n");
               break;
            }       
            else if(srv == 'b')
            {
               printf("La startup piú adatta alle tue esigenze è:  MountainsOnFireSRL\n");
               break;
            }       
            else if(srv == 'c')
            {
               printf("La startup piú adatta alle tue esigenze è:  NeroneSRL\n");
               break;
            }       
            
            else
                printf("Ïnvalido, inserire un carattere valido\n");
        }
    }
}