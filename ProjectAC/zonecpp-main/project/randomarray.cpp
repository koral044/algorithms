#include "header.h"
#include <cstdlib>
#include <ctime>
void generateRandomArray(int arr[], int size, int minimum, int maximum)
{
    std::srand(std::time(0)); // Seed for the random number generator

    for (int i = 0; i < size; ++i)
    {
        arr[i] = std::rand() % (maximum - minimum + 1) + minimum;
    }
}