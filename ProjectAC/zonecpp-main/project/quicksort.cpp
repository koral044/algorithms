#include <iostream>
#include <algorithm>
#include "header.h"
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int start, int finish) {
    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= finish; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    int pindex = start + count;
    swap(arr[pindex], arr[start]);

    int i = start, j = finish;

    while (i < pindex && j > pindex) {
        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pindex && j > pindex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pindex;
}

void quickSortmain(int arr[], int start, int finish) {
    if (start >= finish)
        return;

    int p = partition(arr, start, finish);

    quickSortmain(arr, start, p - 1);
    quickSortmain(arr, p + 1, finish);
}
void quicksort(int arr[],int size)
{
    quickSortmain(arr,0,size-1);
}