/* Programming Exercise 4-4 */

#include <stdio.h>

int main(void) {
    char name[20];
    float height;

    printf("Write your name: ");
    scanf("%s", name);
    printf("Write your height in centimeters: ");
    scanf("%f", &height);
    printf("%s, you are %.2f meters tall.\n", name, height / 100);

    return 0;
}
