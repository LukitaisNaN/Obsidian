#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

static void insert(int a[], unsigned int i) 
{
    while (i > 0)
    {
        if (goes_before(a[i], a[i-1]))
        {
            int temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
        }
        i--;
    }    
}

void insertion_sort(int a[], unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
        insert(a, i);
    }
}