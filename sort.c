#include <stdio.h>
#include "sort.h"

void print_array(IntPtr array, int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
}

void swap(IntPtr ref1, IntPtr ref2)
{
    int temp = *ref1;
    *ref1 = *ref2;
    *ref2 = temp;
}