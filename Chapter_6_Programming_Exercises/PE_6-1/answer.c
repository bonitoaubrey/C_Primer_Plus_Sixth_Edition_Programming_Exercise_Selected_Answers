/* Programming Exercise 6-1 */

#include <stdio.h>

int main(void) {
    char alphabet[26];

    for (int i = 0; i < 26; i++) {
        alphabet[i] = i + 'a';
        printf("%c ", alphabet[i]);
    }
    printf("\n");

    return 0;
}
