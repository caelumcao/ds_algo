#define CATCH_CONFIG_ENABLE_BENCHMARKING

#include "catch2/catch.hpp"
#include "merge_sort.h"
#include "util/util.hpp"
#include <cstdlib>
#include <ctime>

TEST_CASE("merge_sort", "[]")
{
    srand(time(NULL));

    SECTION("test 1")
    {
        int arr[] = {7, 5, 2, 1, 9, 0, 3, 8, 6, 4};
        int expect[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        merge_sort(arr, 10);
        REQUIRE(compare_array(arr, expect, 10));
    }

    SECTION("benchmark 1000")
    {
        const int n = 1000;

        BENCHMARK("merge_sort")
        {
            int arr[n];
            for (int i = 0; i < n; ++i)
                arr[i] = rand();
            return merge_sort(arr, n);
        };
    }
}
