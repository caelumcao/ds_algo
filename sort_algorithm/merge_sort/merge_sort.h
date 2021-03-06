//// 归并排序

#include <algorithm>

void merge(int arr[], int left, int mid, int right)
{
    int *res = new int[right - left + 1];
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            res[k++] = arr[i++];
        else
            res[k++] = arr[j++];
    }
    while (i <= mid)
        res[k++] = arr[i++];
    while (j <= right)
        res[k++] = arr[j++];
    for (i = left; i <= right; ++i)
        arr[i] = res[i - left];
    delete res;
}

void merge_sort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void merge_sort(int arr[], int n)
{
    merge_sort(arr, 0, n - 1);
}