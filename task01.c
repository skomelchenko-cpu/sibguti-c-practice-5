#include <stdio.h>

double my_log2(double x) {
    double result = 0.0;

    while (x >= 2.0) {
        x /= 2.0;
        result += 1.0;
    }

    while (x < 1.0) {
        x *= 2.0;
        result -= 1.0;
    }

    double part = 0.5;

    for (int i = 0; i < 30; i++) {
        x *= x;

        if (x >= 2.0) {
            x /= 2.0;
            result += part;
        }

        part /= 2.0;
    }

    return result;
}

int main(void) {
    const double A = 1.0;
    const double B = 8.0;
    const double H = 1.0;

    int iteration = 1;

    printf("No.\tX\tY\n");

    for (double x = A; x <= B; x += H) {
        double y = my_log2(x);
        printf("%d\t%.4f\t%.4f\n", iteration, x, y);
        iteration++;
    }

    return 0;
}
