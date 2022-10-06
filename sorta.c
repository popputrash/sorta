#include <stdio.h>
#include <unistd.h>
#include <unistd.h>
#include <stdlib.h>
int data[20];

int bubbleSort(int array[], int size){
    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j < size-1; j++){
            if(array[j] > array[j+1]){
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                visualizeArray(array, size);
            }
        }
    }  
}


void visualizeArray(int array[], int size){ 
  printf("\x1b[2J");
  for(int i = 0; i < size; i++){
    printf("- ");
    for(int j = 0; j < array[i]; j++){
      printf("O");
    }
    printf("\n");;
  }
  usleep(70000);
}


void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
} 

int main(){

    int size = sizeof(data)/sizeof(data[0]);
    
    for (int i = 0; i < size; i++){
        data[i] = rand() % 10;
    }

    bubbleSort(data, sizeof(data)/sizeof(data[0]));

    printf("\n");


}

