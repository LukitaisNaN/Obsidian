#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "array_helpers.h"

int array_copy(int copy[], int array[], unsigned int length) {
    for (unsigned int i = 0u; i < length; ++i) {
        copy[i] = array[i];
    }
    return 1;
}

int arrayFromFile(int ohMyLong, int array[], FILE *archive)
{
    for (int i = 0; i < ohMyLong; i++)
    {
        fscanf(archive, "%d", &array[i]);
    }
   
    return 1;
}

int arrayDump(int array[], int length)
{
    printf("[");

    for (int i = 0; i < length; i++)
    {
        if (i != length-1)
        {
            printf("%d, ", array[i]);
        }
        else
        {
            printf("%d", array[i]);
        }
        
    }

    printf("]\n\n");
    return 1;
}

int arrayInput(int array[], int maxSize)
{
    for (int j = 0; j < maxSize; j++)
    {
        printf("Numero para elemento en posicion %d\n", j);
        scanf("%d", &array[j]);
    }
    return 1;
}

int checkNull(FILE *archive, char const *dir)
{
    if (archive == NULL)
    {
        printf("Error cargando archivo ubicado en %s\n", dir);
        exit(1);
    }

    return 1;
}

int array_swap(int a[], unsigned int i, unsigned int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    return 1;
}