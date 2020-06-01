
#include <conio.h>
#include <stdio.h>

int main()
{
    int opcion;
   
    printf(" \t       MENU    \n");
    printf(" \t  1- generacion \n");
    printf(" \t  2- generacion \n");
    printf(" \t  3- generacion \n");
    printf(" \t  4- generacion \n");
    printf("\nPor favor introduce una opcion: \n");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:
        {
        	printf("\nabuelos\n");
        	printf("\nJuana y Amado\n");
           
            break;
        }

        case 2:
        {
        	printf("\npadre\n");
            printf("\nEstela y Salvador\n");

    
            break;
        }
        case 3:
        {
        	printf("\ntios\n");
           printf("\nJuan y Angeles\n");
            break;
        }

        case 4:
        {
        	printf("\nyo\n");
           printf("\nAngel Salvador\n");
            break;
        }

        default:
            printf("\nLa opcion no es correcta");
    }
}

