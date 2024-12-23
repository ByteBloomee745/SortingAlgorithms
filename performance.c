#include <time.h>
#include "performance.h"

double measure_time(void (*sort_func)(int[], int), int arr[], int n) {
    clock_t start, end;
    start = clock();
    sort_func(arr, n);
    end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

