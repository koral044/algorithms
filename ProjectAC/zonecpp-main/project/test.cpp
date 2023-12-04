#include "header.h"
#include <iostream>
#include <cassert>
#include <algorithm>
void test(void (*sortFunction)(int*, int), const char* sortName, int* arr, int len) {
    sortFunction(arr, len);
    assert(std::is_sorted(arr, arr + len));
    std::cout << sortName << " sort passed the test.\n";
}