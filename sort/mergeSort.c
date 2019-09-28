#include "headers\mergeSort.h"
#include "..\utils\headers\arrayPrinter.h"
#include <stdio.h>
#include <stdlib.h>

static void merge(int array[], int first, int middle, int last);

void mergeSort(int array[], int first, int last){

    if(first < last){

        int middle = first + (last - first) / 2;

        mergeSort(array, first, middle);
        mergeSort(array, middle + 1, last);
        merge(array, first, middle, last);
    } 
}

static void merge(int array[], int first, int middle, int last){

    int i, j, k;

    int n1 = middle - first + 1;
    int n2 = last - middle;

    int leftArray[n1], rightArray[n2];

    for (i = 0; i < n1; i++) leftArray[i] = array[first + i];
    for (j = 0; j < n2; j++) rightArray[j] = array[middle + 1 + j];

    i = 0; 
    j = 0;
    k = first;

    while (i < n1 && j < n2)
    {
        if(leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }
    
    while (i < n1)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }
    
    while (j < n2)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}