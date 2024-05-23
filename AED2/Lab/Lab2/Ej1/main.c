#include <assert.h>
#include <stdio.h>

#include "sort.h"
#include "sort_helpers.h"
#include "array_helpers.h"

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

    printf("starting array:\n[");
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


    insertion_sort(myArray, myArrayLength);
    
    printf("---\t --- \t --- \nFinal array:\n[");
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

    assert(array_is_sorted(myArray, myArrayLength));

    return 0;
}