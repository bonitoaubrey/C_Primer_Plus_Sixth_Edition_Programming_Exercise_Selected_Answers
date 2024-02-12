/* Programming Exercise 6-17 */

#include <stdio.h>

int main(void) {
    int million = 1000000;
    int withdraws = 100000;
    int years = 0;
    
    while (million > 0) {
        million = million + million * 8 / 100 - withdraws;
        years++;
    };

    printf("%d\n", years);

    return 0;
}
