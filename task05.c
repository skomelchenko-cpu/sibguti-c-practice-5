#include <stdio.h>
double calc(double a, double b){
    return (a - b) * (a - b) / (a * b);
}
int main(void){
    double a;
    double b;
    printf("Enter a and b (nonzero): ");
    while (scanf("%lf %lf", &a, &b) == 2){
        printf("Result: %.4f\n", calc(a, b));
        printf("Enter a and b (nonzero): ");
    }
    return 0;
}
