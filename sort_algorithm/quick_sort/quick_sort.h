//// 快速排序

#include "util/util.hpp"

void quick_sort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int i = start, j = end;
    int pivot = arr[start];

    while (i < j)
    {
        while (arr[j] >= pivot && i < j)
            --j;
        while (arr[i] <= pivot && i < j)
            ++i;
        if (i < j)
            swap_util(arr, i, j);
    }
    swap_util(arr, start, i);
    quick_sort(arr, start, i - 1);
    quick_sort(arr, i + 1, end);
}

void quick_sort(int arr[], int n)
{
    quick_sort(arr, 0, n - 1);
}