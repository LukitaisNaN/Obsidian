#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

int partition(int a[], int left,  int right)
{
    int pivot = right;
	int count = left-1;
		
	for (int i = left; i <= right; i++) 
    {
		if (goes_before(a[i], a[pivot])) 
        {
		    count++;
            swap(a,count, i);
		}
	}
	
    count++;
	swap(a, count, right);
	return count;
}

static void quick_sort_rec(int a[], int izq,int der) {
    if (izq <= der)
    {   
        int pivot = partition(a,izq,der);
        quick_sort_rec(a,izq, pivot-1);
        quick_sort_rec(a,pivot+1,der); 
    }
}

void quick_sort(int a[],int length) {
    quick_sort_rec(a, 0, length-1);
}

