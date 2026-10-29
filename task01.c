#include <stdio.h>
#include <math.h>
int main(void){
    const double A = 1.0;
    const double B = 8.0;
    const double H = 1.0;
    int iteration = 1;
    printf("No.\tX\tY\n");
    for (double x = A; x <= B; x += H){
        double y = log2(x);
        printf("%d\t%.4f\t%.4f\n", iteration, x, y);
        iteration++;
    }
    return 0;
}
