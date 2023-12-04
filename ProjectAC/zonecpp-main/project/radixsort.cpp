#include "header.h"
#include <algorithm>

int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
void countingSort(int arr[], int n, int exp) {
    const int BASE = 10;
    int output[n];
    int count[BASE] = {0};

    for (int i = 0; i < n; ++i)
        count[(arr[i] / exp) % BASE]++;

    for (int i = 1; i < BASE; ++i)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % BASE] - 1] = arr[i];
        count[(arr[i] / exp) % BASE]--;
    }

    for (int i = 0; i < n; ++i)
        arr[i] = output[i];
}
void radixSort(int arr[], int n) {
    int max = getMax(arr, n);

    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}