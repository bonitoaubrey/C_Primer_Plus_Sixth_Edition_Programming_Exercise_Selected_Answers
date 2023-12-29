/* Programming Exercise 3-5 */

#include <stdio.h>

const float SECONDS_IN_YEAR = 3.156e7;

int main(void) {
    float age;
    printf("Enter your age in years: ");
    scanf("%f", &age);
    printf("Your age in seconds: %.3e",
        age * SECONDS_IN_YEAR);

    return 0;
}
