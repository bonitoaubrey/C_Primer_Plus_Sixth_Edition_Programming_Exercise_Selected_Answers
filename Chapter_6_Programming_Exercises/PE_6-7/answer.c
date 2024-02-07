/* Programming Exercise 6-7 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char word[40];
    size_t len;

    scanf("%s", word);

    for (len = strlen(word); len--;)
        printf("%c", word[len]);
    printf("\n");

    return 0;
}
