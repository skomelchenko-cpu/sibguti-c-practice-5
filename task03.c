#include <stdio.h>
int main(void){
    int n;
    printf("N (0 to exit): ");
    while (scanf("%d", &n) == 1 && n > 0){
        double sum = 0.0;
        for (int i = 1; i <= n; i++){
            sum += 1.0 / i;
        }
        printf("SUM: %.6f\n", sum);
        printf("N (0 to exit): ");
    }
    return 0;
}
