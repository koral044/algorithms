#include <chrono>
#include "header.h"
long long measureTime(void (*sortFunction)(int*, int), int* arr, int len) {
    auto start = std::chrono::high_resolution_clock::now();

    sortFunction(arr, len);

    auto end = std::chrono::high_resolution_clock::now();

    return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
}