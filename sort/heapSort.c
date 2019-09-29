#include "headers\heapSort.h"
#include "..\utils\headers\arraySwapper.h"

void buildMaxHeap(int array[], int size);
void maxHeapify(int array[], int size, int i);

void heapSort(int array[], int size){

    int i, j;
    
    buildMaxHeap(array, size);

    j = size;

    for (i = size; i >= 0; i--)
    {
        swap(array, 0, i);
        j = j - 1;
        maxHeapify(array, j, 0);
    }
}

void buildMaxHeap(int array[], int size)
{
    int i;

    for (i = size/2; i >= 0; i--)
    {
        maxHeapify(array, size, i);
    }
}

void maxHeapify(int array[], int size, int i){

    int max;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= size && array[left] > array[i])
        max = left;
    else
        max = i;

    if(right <= size && array[right] > array[max])
        max = right;
    
    if(max != i){
        swap(array, i, max);
        maxHeapify(array, size, max);
    }
}