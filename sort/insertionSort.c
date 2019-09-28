#include "headers\insertionSort.h"

void insertionSort(int array[], int size){

    int i,j;

    for( j = 1; j < size; j++ ){
        int key = array[j];
        i = j - 1;
        while(i >= 0 && array[i] > key){
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key;
   }
}