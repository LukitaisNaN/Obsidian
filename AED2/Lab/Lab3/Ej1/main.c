#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

static void dump(char a[], unsigned int length) {
    printf("\"");
    for (unsigned int j=0u; j < length; j++) {
        printf("%c", a[j]);
    }
    printf("\"");
    printf("\n");
}

int sortWord(char unsorted[], int indexes[], char sorted[], unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        sorted[indexes[i]] = unsorted[i];
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    FILE *fp = fopen(argv[1], "r");
    if (argc < 1)
    {
        printf("No arg\n");
        return -1; 
    }


    if (fp == NULL)
    {
        printf("Error cargando archivo ubicado en %s\n", argv[1]);
        return -1;
    }
    

    int indexes[MAX_SIZE];
    char letters[MAX_SIZE];
    char sorted[MAX_SIZE];

    unsigned int i = 0;

    while (fscanf(fp, "%u -> *%c*\n", &indexes[i], &letters[i]))
    {   
        if (indexes[i] > MAX_SIZE)
        {
            printf("There is a position out of range!\n");
            return -1;
        }
        
        i++;

        if (feof(fp))
        {
            fclose(fp);
            break;
        }
        
    }

    sortWord(letters, indexes, sorted, i);

    dump(sorted, i);
    
    return 0;
}

