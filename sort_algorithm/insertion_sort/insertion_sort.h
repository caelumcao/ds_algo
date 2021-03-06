//// 插入排序

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int temp = arr[i], j;
        for (j = i; j > 0 && temp < arr[j - 1]; --j)
            arr[j] = arr[j - 1];
        arr[j] = temp;
    }
}
