#include "sort_helpers.h"

#include <stdbool.h>


void swap(int a[], unsigned int i, unsigned int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

bool goes_before(int x, int y)
{
    if (x < y)
    {
        return true;
    }
    return false; 
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

