//// 冒泡排序

#include "util/util.hpp"

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap_util(arr, j, j + 1);
}

void bubble_sort_quicker(int arr[], int n)
{
    int i, j, flag;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap_util(arr, j, j + 1);
                flag = 1;
            }
        }
        if (!flag)
            return;
    }
}