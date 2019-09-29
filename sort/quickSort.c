#include "headers\quickSort.h"
#include "..\utils\headers\arraySwapper.h"

int split(int array[], int first, int last);

void quickSort(int array[], int first, int last){
    if(first < last){
        int middle = split(array, first, last);
        quickSort(array, first, middle - 1);
        quickSort(array, middle + 1, last);
    }
}

int split(int array[], int first, int last){

    int pivot = array[last];
    int i = first - 1;
    int j;
    
    for (j = first; j < last; j++)
    {
        if(array[j] <= pivot){
            i++;
            swap(array, i, j);
        }
    }
    
    swap(array, i + 1, last);
    return i + 1;
}