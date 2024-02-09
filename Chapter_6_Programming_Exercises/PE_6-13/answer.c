/* Programming Exercise 6-13 */

#include <stdio.h>

int main(void) {
    int array[8];

    for (int i = 0; i < 8; i++)
        array[i] = (i + 1) * (i + 1);

    int j = 0;

    do {
        printf("%d ", array[j]);
    } while (j++ < 7);

    printf("\n");

    return 0;
}
