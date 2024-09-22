#include "stdio.h"
#include "string.h"
#define ARRAY_LENGTH 10

int array[10] = {0,2,1,5,3,8,9,6,4,7};

/* Do not use this array in your code! */
int array_copy[10] = {0,2,1,5,3,8,9,6,4,7};

/* Do not need to understand this for now */
/* Initialize the original array */
void init_array(){
    memcpy(&array_copy, &array, sizeof(array));
}

/* Select Sort, please fill in this function */
void select_sort(){
   
}

/* Buble Sort, please fill in this function */
void buble_sort(){
    
}

void print_result(){
    printf("Result: ");
    for(int i = 0; i < 10 ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    printf("Implementing Select Sort:\n");
    select_sort();
    print_result();
    /*----- new attempt ------*/
    init_array();
    printf("Implementing Buble Sort:\n");
    buble_sort();
    print_result();
}