#include "headers\arrayGen.h"

void generateRandomArray(int array[], int size){
    int i;

    for ( i = 0; i < size; i++)
    {
        array[i] = rand() % 1000 + 1;
    }
}

void generateSortedArray(int array[], int size){
    int i;

    for ( i = 0; i < size; i++)
    {
        array[i] = i;
    }
}

void generateInverseSortedArray(int array[], int size){
    int i;

    for ( i = 0; i < size; i++)
    {
        array[i] = size - i;
    }
}