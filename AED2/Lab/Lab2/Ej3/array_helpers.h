#ifndef arrayHelpers
#define arrayHelpers

int arrayFromFile(int ohMyLong, int array[], FILE *archive);

int arrayDump(int array[], int length);

int arrayInput(int array[], int maxSize);

int checkNull(FILE *archive, char const *dir);
    
#endif