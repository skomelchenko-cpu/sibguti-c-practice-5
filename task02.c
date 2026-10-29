#include <stdio.h>
#define HEIGHT 5
int main(void){
    const char symbols[] = {'*', ' ', '#'};
    for (int row = 0; row < HEIGHT; row++){
        for (int col = 0; col < HEIGHT; col++){
            int outer = (row == 0 || row == HEIGHT - 1 ||
            col == 0 || col == HEIGHT - 1);
            int center = (row == HEIGHT / 2 && col == HEIGHT / 2);
            putchar(symbols[2 * outer + center]);
        }
        putchar('\n');
    }
    return 0;
}
