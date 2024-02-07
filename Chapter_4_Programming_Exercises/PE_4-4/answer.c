/* Programming Exercise 4-4 */

#include <stdio.h>

int main(void) {
    float height;
    char name[40];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);
    printf("%s, you are %.2f meters tall\n", name, height / 100);

    return 0;
}
