/* Programming Exercise 6-9 */

#include <stdio.h>

void calculation(float num1, float num2);

int main(void) {
    float num1;
    float num2;

    while (1) {
        printf("Enter two floating-point numbers: ");
        if (2 != scanf("%f %f", &num1, &num2))
            break;
        calculation(num1, num2);
    }

    return 0;
}


void calculation(float num1, float num2) {
    printf("%f\n\n", (num1 - num2) / (num1 * num2));
}
