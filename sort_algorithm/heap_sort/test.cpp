#define CATCH_CONFIG_ENABLE_BENCHMARKING

#include "catch2/catch.hpp"
#include "heap_sort.h"
#include "util/util.hpp"
#include <cstdlib>
#include <ctime>

TEST_CASE("quick_sort", "[]")
{
    srand(time(NULL));

    SECTION("test 1")
    {
        int arr[] = {7, 5, 2, 1, 9, 0, 3, 8, 6, 4};
        int expect[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        heap_sort(arr, 10);

        REQUIRE(compare_array(arr, expect, 10));
    }

    SECTION("test 2")
    {
        int arr[] = {6, 6, 6, 6, 6, 6};
        int expect[] = {6, 6, 6, 6, 6, 6};
        heap_sort(arr, 6);
        REQUIRE(compare_array(arr, expect, 6));
    }

    SECTION("benchmark 1000")
    {
        const int n = 1000;

        BENCHMARK("heap_sort")
        {
            int arr[n];
            for (int i = 0; i < n; ++i)
                arr[i] = rand();
            return heap_sort(arr, n);
        };
    }
}
