/* Programming Exercise 3-2 */

#include <stdio.h>

int main(void) {
    char c;

    printf("Enter an ASCII code value: ");
    scanf("%d", &c);
    printf("The character %d have that ASCII code: %c\n", c, c);

    return 0;
}
