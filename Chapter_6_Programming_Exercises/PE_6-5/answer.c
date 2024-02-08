/* Programming Exercise 6-5 */

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);

    for (int row = 1; row < ch - 'A' + 2; row++) {
        for (int spaces = ch - 'A' + 1 - row; spaces; spaces--)
            printf(" ");
        for (int letter = 'A', i = row; i; i--)
            printf("%c", letter++);
        for (int end = 'A' + row - 2; end >= 'A'; end--)
            printf("%c", end);
        printf("\n");
    };

    return 0;
}
