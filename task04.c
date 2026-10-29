#include <stdio.h>
#include <math.h>
#define SIZE 8
int main(void){
    double arr[SIZE];
    double value = 1.0;
    for (int i = 0; i < SIZE; i++){
        arr[i] = value;
        value *= 2.0;
    }
    double maximum = arr[0];
    for (int i = 1; i < SIZE; i++){
        maximum = fmax(maximum, arr[i]);
    }
    printf("Original: ");
    for (int i = 0; i < SIZE; i++){
        printf("%.2f ", arr[i]);
    }
    printf("\nProcessed: ");
    for (int i = 0; i < SIZE; i++){
        printf("%.2f ", arr[i]);
    }
    printf("\nMAX: %.2f\n", maximum);
    return 0;
}
