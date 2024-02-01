/* Programming Exercise 4-3 */

#include <stdio.h>

int main(void) {
    float number;

    printf("Write float-poin number: ");
    scanf("%f", &number);
    printf("The input is %.1f or %.1e\n", number, number);
    printf("The input is %+.3f or %.3E\n", number, number);

    return 0;
}
