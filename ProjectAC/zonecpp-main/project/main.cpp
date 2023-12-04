#include <iostream>
#include "header.h"
#include <fstream>
#include <Windows.h>
void printarray(int arr[],int n)
{for(int i = 0;i<n;i++){std::cout<<arr[i]<<" ";}
    std::cout<<std::endl; }
int main() {
    //teststarted
    /*
    int testarr[] = {6,8,3,1,2,9,7};
    int testnum = sizeof(testarr) / sizeof(testarr[0]);

    test(heapsort,"heapsort",testarr,testnum);
    test(radixSort,"Radixsort",testarr,testnum);
    test(insertionSort,"Insertionsort",testarr,testnum);
    test(quicksort,"quicksort",testarr,testnum);
    //testend
    int size, max,min;

    std::cout<<"Enter the size of array: ";
    std::cin>> size;
    std::cout<<"Enter the minimum value: ";
    std::cin>>min;
    std::cout<<"Enter the maximum value: ";
    std::cin>>max;
    std::cout<<std::endl;
    int arr[size];
    generateRandomArray(arr,size,min,max);
                                 //printarray(arr,size);
                                //quicksort(arr,0,size-1);
                               // printarray(arr,size);
    std::cout << "Sorting array with heapsort took: " << measureTime(heapsort, arr, size) << " microseconds." << std::endl;
    std::cout << "Sorting array with radixsort took: " << measureTime(radixSort, arr, size) << " microseconds." << std::endl;
    std::cout << "Sorting array with insertionsort took: " << measureTime(insertionSort, arr, size) << " microseconds." << std::endl;
    std::cout << "Sorting array with quicksort took: " << measureTime(quicksort, arr, size) << " microseconds." << std::endl;
    printarray(arr,size);
    */
    //OUTPUT
         std::ofstream outputFile("C:/Users/Emin/Desktop/data/data.txt");
         if (!outputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
                                    }
         outputFile<<"Size,"<<"Quicksort,"<<"Heapsort,"<<"Insertionsort,"<<"Radixsort"<<std::endl;
        for(int i = 0; i <= 100; i+=5) {
        std::cout << "-";
        int emin_arr[i];
        outputFile << i << ",";
        generateRandomArray(emin_arr, i, 1, 500);
            radixSort(emin_arr,i);
        outputFile << measureTime(quicksort, emin_arr, i) << ",";

        int emin_heap[i];
            //generateRandomArray(emin_heap, i, 1, 10000);

            outputFile << measureTime(heapsort, emin_arr, i) << ",";

        int emin_insertion[i];
           // generateRandomArray(emin_insertion, i, 1, 10000);
            outputFile << measureTime(insertionSort, emin_arr, i) << ",";

        int emin_radix[i];
           // generateRandomArray(emin_radix, i, 1, 10000);
            outputFile << measureTime(radixSort, emin_arr, i) ;
        outputFile<<std::endl;
    }

    Beep(750,1000);

/*
    outputFile << "Sorting array using heapsort took: " << measureTime(heapsort, arr, size) << " microseconds." << std::endl;
    outputFile << "Sorting array using radixSort took: " << measureTime(radixSort, arr, size) << " microseconds." << std::endl;
    outputFile << "Sorting array using insertionSort took: " << measureTime(insertionSort, arr, size) << " microseconds." << std::endl;
    outputFile << "Sorting array using quicksort took: " << measureTime(quicksort, arr, size) << " microseconds." << std::endl;
    outputFile.close(); */
    //OUTPUTEND

    return 0;
}
