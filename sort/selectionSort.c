#include <stdio.h>
#include "headers\selectionSort.h"

void selectionSort(int array[], int size){
    int i,j;

    for( j = 0; j < size - 1; j++ ){
        int smallest = j;
        for( i = j+1; i < size; i++ ){
            if (array[i] < array[smallest])
            {
                smallest = i;
            }
        }
        int smallestKey = array[smallest];
        array[smallest] = array[j];
        array[j] = smallestKey;
   }
}