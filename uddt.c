
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// Compilar 
// gcc uddt.c -o uddt.exe

struct client{
    char  Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main()
{
    struct client cliente1={0};
    strcpy(cliente1.Name,"Camilo Valencia");
    strcpy(cliente1.Id,"00000001");
    strcpy(cliente1.Address,"Calle 1");
    cliente1.Credit = 1000000;
    
    printf("El nombre del cliente es %s",cliente1.Name);
    printf("\nEl ID del cliente es %s",cliente1.Id);
    printf("\nEl Credit del cliente es %f",cliente1.Credit);
    printf("\nEl Credit del cliente es %s",cliente1.Address);
    printf("\n bye");

    return 0;
}