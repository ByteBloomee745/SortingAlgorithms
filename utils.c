#include <stdlib.h>
#include <time.h>
#include "utils.h"

void generate_random_array(int arr[], int n, int max_value) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % max_value;
    }
}

