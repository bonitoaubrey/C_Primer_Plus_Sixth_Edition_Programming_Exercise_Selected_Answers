/* Programming Exercise 6-15 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[255];
    size_t index;

    printf("Enter some text: ");
    scanf("%s", str);

    for (index = strlen(str); index-- ;)
        printf("%c", str[index]);
    printf("\n");

    return 0;
}
