#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <algorithm>
void heapsort(int arr[],int n);
void heapify(int arr[], int n, int i);
void quicksort(int arr[], int size);
void printarray(int arr[], int n);
void insertionSort(int arr[],int n);
int getMax(int arr[], int n);
void countingSort(int arr[], int n, int exp);
void radixSort(int arr[], int n);
void test(void (*sortFunction)(int*, int), const char* sortName, int* arr, int len);
long long measureTime(void (*sortFunction)(int*, int), int* arr, int len);
void generateRandomArray(int arr[], int size, int minimum, int maximum);
#endif
