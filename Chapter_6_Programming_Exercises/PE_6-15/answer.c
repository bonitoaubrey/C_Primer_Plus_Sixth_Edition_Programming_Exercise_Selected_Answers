/* Programming Exercise 6-15 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[255];
    size_t index;
    int i = 0;

    printf("Enter some text:\n");
    scanf("%c", &str[i]);
    while (str[i++] != '\n')
        scanf("%c", &str[i]);
    str[i] = '\0';

    for (index = strlen(str); index-- ;)
        printf("%c", str[index]);
    printf("\n");

    return 0;
}
