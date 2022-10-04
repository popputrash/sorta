#include <stdio.h>
#include <stdlib.h>
int data[20000];

int bubbleSort(int array[], int size){
    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j < size-1; j++){
            if(array[j] > array[j+1]){
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }  
}

void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
} 

int main(){

    int size = sizeof(data)/sizeof(data[0]);

    for (int i = 0; i < size; i++){
        data[i] = rand() % 20000;
    }
    
    printArray(data, size);

    bubbleSort(data, sizeof(data)/sizeof(data[0]));
    
    printf("\n");

    printArray(data, size);

}

