#include <stdlib.h>
#include <stdio.h>
#include "../Ej3/array_helpers.h"

int main(int argc, char const *argv[])
{
    (void)argc;
 
    FILE *myArchive = fopen(argv[1], "r");
    checkNull(myArchive, argv[1]);

    int myArrayLength = 0;
    fscanf(myArchive,"%d", &myArrayLength);

    int myArray[myArrayLength];
    
    arrayFromFile(myArrayLength, myArray, myArchive);
    
    arrayDump(myArray, myArrayLength);

    int tam = 0;
    printf("Tamanio del array:\n");
    scanf("%d", &tam);

    int manualArray[tam];
    arrayInput(manualArray, tam);

    arrayDump(manualArray, tam);

    fclose(myArchive);

    return 0;
}