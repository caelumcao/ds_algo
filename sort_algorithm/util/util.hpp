#ifndef UTIL_HPP
#define UTIL_HPP

#include <chrono>

static void swap_util(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

static bool compare_array(int left[], int right[], int n)
{
    for (int i = 0; i < n; ++i)
        if (left[i] != right[i])
            return false;
    return true;
}

static long long get_cur_time_ms()
{
    auto duration = std::chrono::system_clock::now().time_since_epoch();
    auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    return millis;
}

#endif