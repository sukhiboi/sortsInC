#include <stdio.h>
#include "sort.h"

void bubble_sort(IntPtr array, int length);

void bubble_sort(IntPtr array, int length)
{
    int sortCount = 0;
    for (int i = 1; i < length; i++)
    {
        if (array[i] < array[i - 1])
        {
            sortCount++;
            swap(&array[i], &array[i - 1]);
        }
    }
    if (sortCount == 0)
    {
        return;
    }
    bubble_sort(array, length);
}

// int main(void)
// {
//     int array[] = {1, 9, 2, 7, 5, 6};
//     int length = sizeof(array) / sizeof(array[0]);
//     bubble_sort(array, length);
//     print_array(array, length);
//     return 0;
// };