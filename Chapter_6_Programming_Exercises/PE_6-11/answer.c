/* Programming Exercise 6-11 */

#include <stdio.h>

int main(void) {
    int array[8];

    printf("Enter eight integers:\n");
    
    for (int i = 0; i < 8; i++)
        scanf("%d", &array[i]);

    for (int i = 7; i >= 0; i--)
        printf("%4d", array[i]);

    printf("\n");

    return 0;
}
