#ifndef arrayHelpers
#define arrayHelpers

int arrayFromFile(int ohMyLong, int array[], FILE *archive);

int arrayDump(int array[], int length);

int arrayInput(int array[], int maxSize);

int checkNull(FILE *archive, char const *dir);

myBool array_is_sorted(int a[], unsigned int length);
    
#endif