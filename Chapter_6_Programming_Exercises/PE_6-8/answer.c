/* Programming Exercise 6-8 */

#include <stdio.h>

int main(void) {
    float num1;
    float num2;

    while (1) {
        printf("Enter two floating-point numbers: ");
        if (2 != scanf("%f %f", &num1, &num2))
            break;
        printf("%f\n\n", (num1 - num2) / (num1 * num2));
    }

    return 0;
}
