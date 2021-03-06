//// 堆排序

#include "util/util.hpp"

void heapify(int tree[], int start, int end)
{
    int child = 2 * start + 1;
    int val = tree[start];
    while (child <= end)
    {
        if (child < end && tree[child] < tree[child + 1])
            ++child;
        if (tree[child] < val)
            break;

        tree[start] = tree[child];
        start = child;
        child = 2 * start + 1;
    }
    tree[start] = val;
}

// 遍历所有父结点，进行堆化
void build_heap(int tree[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; --i)
        heapify(tree, i, n - 1);
}

void heap_sort(int tree[], int n)
{
    build_heap(tree, n);
    for (int i = n - 1; i > 0; --i)
    {
        swap_util(tree, 0, i);
        heapify(tree, 0, i - 1);
    }
}