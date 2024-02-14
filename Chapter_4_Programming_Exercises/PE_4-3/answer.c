/* Programming Exercise 4-3 */

#include <stdio.h>

int main(void) {
    float num;

    printf("Input float-point number:\n");
    scanf("%f", &num);

    printf("a. The input is %.1f of %.1e.\n", num, num);
    printf("b. The input is %+.3f of %.3E.\n", num, num);
}
