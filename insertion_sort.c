#include <stdio.h>
#include "sort.h"

void insertion_sort(IntPtr array, int length);

void insertion_sort(IntPtr array, int length)
{
    for (int i = 1; i < length; i++)
    {
        int temp = array[i];
        int new_idx = i;
        while (new_idx > 0 && temp < array[new_idx - 1])
        {
            array[new_idx] = array[new_idx - 1];
            new_idx--;
        }
        array[new_idx] = temp;
    }
}

int main(void)
{
    int array[] = {23, 7};
    int length = sizeof(array) / sizeof(array[0]);
    insertion_sort(array, length);
    print_array(array, length);
    return 0;
};