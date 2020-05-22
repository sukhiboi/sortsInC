#include <stdio.h>
#include "sort.h"

void selection_sort(IntPtr array, int length);

Bool is_greater_than(IntPtr ref1, IntPtr ref2)
{
    if (*ref1 > *ref2)
        return True;
    return False;
}

void selection_sort(IntPtr array, int length)
{
    for (int i = 0; i < length; i++)
    {
        int idx = i;
        for (int j = i + 1; j < length; j++)
            if (array[j] < array[idx])
                idx = j;
        swap(&array[idx], &array[i]);
    }
}

// int main(void)
// {
//     int array[] = {1, 2, 7, 5, 6};
//     int length = sizeof(array) / sizeof(array[0]);
//     selection_sort(array, length);
//     print_array(array, length);
//     return 0;
// };