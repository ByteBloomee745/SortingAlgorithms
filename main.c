#include <stdio.h>
#include "sort_algorithms.h"
#include "performance.h"
#include "utils.h"

int main() {
    int n = 10;
    int arr[n];
    
    generate_random_array(arr, n, 100);
    
    printf("Tableau initial : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    double time_taken = measure_time(bubble_sort, arr, n);

    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Temps pris par le tri à bulles : %f secondes\n", time_taken);

    return 0;
}

