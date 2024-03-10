/* Programming Exercise 5-2 */

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++) {
        printf("%d ", num + i);
    }
    printf("\n");

    return 0;
}
