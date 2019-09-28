#include <stdio.h>
#include <time.h>
#include "headers\sort.h"
#include "headers\insertionSort.h"
#include "headers\selectionSort.h"
#include "headers\mergeSort.h"

float sort(sortType type, int array[], int size){

    clock_t start = clock();

    switch (type)
    {
        case INSERTION_SORT:
            insertionSort(array, size);
            break;
        case SELECTION_SORT:
            selectionSort(array, size);
            break;
        case MERGE_SORT:
            mergeSort(array, 0, size - 1);
            break;
        case HEAP_SORT:
            heapSort(array, size);
            break;
        default:
            printf("Sort type not found!");
            break;
    }

   clock_t end = clock();

   return (float)(end - start) / CLOCKS_PER_SEC;
}