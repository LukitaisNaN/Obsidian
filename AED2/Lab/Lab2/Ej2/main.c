#include <stdio.h>
#include <stdlib.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

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

    printf("Starting array:\n[");
    for (int i = 0; i < myArrayLength; i++)
    {
        if (i != myArrayLength-1)
        {
            printf("%d, ", myArray[i]);
        }
        else
        {
            printf("%d", myArray[i]);
        }
        
    }
    printf("]\n");

    quick_sort(myArray, myArrayLength);

    printf("Sorted array:\n[");
    for (int i = 0; i < myArrayLength; i++)
    {
        if (i != myArrayLength-1)
        {
            printf("%d, ", myArray[i]);
        }
        else
        {
            printf("%d", myArray[i]);
        }
        
    }
    printf("]\n");
    
    return 0;
}

