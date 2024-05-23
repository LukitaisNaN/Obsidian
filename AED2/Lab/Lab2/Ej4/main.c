#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

//I used "time.h" lib, it only works with bigger archives, i couldnt work with the functions given. 

int main(int argc, char *argv[]) {
    
    //Make array from argument
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

    //

    int copy[myArrayLength];

    array_copy(copy, myArray, myArrayLength);

    // Selection sort
        clock_t start_time = clock();
        selection_sort(copy, myArrayLength);
        clock_t end_time = clock();

        double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000.0;
        printf("\nStatistics for selection_sort\n");
        printf("Time taken: %.2f milliseconds\n\n", elapsed_time);

    //

    array_copy(copy, myArray, myArrayLength);

    // Insertion sort
        start_time = clock();
        insertion_sort(copy, myArrayLength);
        end_time = clock();
        
        elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000.0;
        printf("statistics for insertion sort\n");
        printf("Time taken: %.2f milliseconds\n\n", elapsed_time);
    //

    array_copy(copy, myArray, myArrayLength);

    // Quick sort
        start_time = clock();
        quick_sort(copy, myArrayLength);
        end_time = clock();

        elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000.0;
        printf("statistics for quick sort\n");
        printf("Time taken: %.2f milliseconds\n\n", elapsed_time);
    //
    
    return EXIT_SUCCESS;
}
