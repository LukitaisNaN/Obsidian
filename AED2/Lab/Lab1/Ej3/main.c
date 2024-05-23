#include <stdlib.h>
#include <stdio.h>
#include "myBool.h"
#include "../Ej3/array_helpers.h"

int swapArray(int array[], int length)
{
    int arrayCopy[length];
    for (int i = 0; i < length; i++)
    {
        arrayCopy[i] = array[i];
    }
    
    int j = length-1;
    for (int i = 0; i < length; i++)
    {
        array[i] = arrayCopy[j];
        j--;
    }
    
    return 1;
    
}

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        printf("Faltan argumentos\n");
        return 1;
    }
 
    FILE *myArchive = fopen(argv[1], "r");
    checkNull(myArchive, argv[1]);

    int myArrayLength = 0;
    fscanf(myArchive,"%d", &myArrayLength);

    int myArray[myArrayLength];

    arrayFromFile(myArrayLength, myArray, myArchive);

    //Invert array
    swapArray(myArray, myArrayLength);

    arrayDump(myArray, myArrayLength);

    myBool order = array_is_sorted(myArray, myArrayLength);

    if (order)
    {
        printf("El array esta ordenado\n");
    }
    else
    {
        printf("El array no esta ordenado\n");
    }

    int tam = 0;
    printf("Tamanio del array:\n");
    scanf("%d", &tam);

    int manualArray[tam];
    arrayInput(manualArray, tam);

    arrayDump(manualArray, tam);

    order = array_is_sorted(manualArray, tam);

    if (order)
    {
        printf("El array esta ordenado\n");
    }
    else
    {
        printf("El array no esta ordenado\n");
    }

    fclose(myArchive);

    return 0;
}