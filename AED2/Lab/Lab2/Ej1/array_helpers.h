#ifndef arrayHelpers
#define arrayHelpers

int arrayFromFile(unsigned int ohMyLong, int array[], FILE *archive);

int arrayDump(int array[], int length);

int arrayInput(int array[], int maxSize);

int checkNull(FILE *archive, char const *dir);

bool array_is_sorted(int a[], unsigned int length);
    
#endif