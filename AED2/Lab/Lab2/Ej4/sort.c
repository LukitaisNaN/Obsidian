#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

static int min_pos_from(int a[], int i, int length) {
     int min_pos = i;
    for (int j = i + 1; j < length; ++j) {
        if (!goes_before(a[min_pos],a[j])) {
            min_pos = j;
        }
    }
    return (min_pos);
}

void selection_sort(int a[], unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
        int min_pos = min_pos_from(a, i, length);
        swap(a, i, min_pos);
    }
}

static void insert(int a[], unsigned int i) {
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

void insertion_sort(int a[], int length) {
    for (int i = 1u; i < length; ++i) {
        insert(a, i);
    }
}

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
