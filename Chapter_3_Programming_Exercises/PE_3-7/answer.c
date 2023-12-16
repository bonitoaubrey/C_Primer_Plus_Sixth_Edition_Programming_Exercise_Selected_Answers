/* Programming Exercise 3-7 */

#include <stdio.h>

const float CENTIMETERS_IN_INCH = 2.54;

int main(void) {
    float height;

    printf("Enter your height in centimeters: ");
    scanf("%f", &height);
    printf("Your height in inches: %.0f\n",
           height / CENTIMETERS_IN_INCH);

    return 0;
}
