#include "sort_helpers.h"
#include <stdio.h>

//The archive that was given didn't work when i tried to compile on windows, so i made this one.

int swap(int a[], unsigned int i, unsigned int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    return 1;
}

bool array_is_sorted(int a[], unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        if (a[i] > a[i+1])
        {
            return false;
        }
    }
    
    return true;
}

bool goes_before(int x, int y)
{
    if (x < y)
    {
        return true;
    }
    return false; 
}
