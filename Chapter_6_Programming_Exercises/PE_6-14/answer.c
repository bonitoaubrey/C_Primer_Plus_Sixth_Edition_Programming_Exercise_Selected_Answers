/* Programming Exercise 6-14 */

#include <stdio.h>

int main(void) {
    double array1[8];
    double array2[8];

    printf("Enter values for the eight elements of the first array: ");

    for (int i = 0; i < 8; i++)
        scanf("%lf", &array1[i]);

    array2[0] = array1[0];
    for (int i = 1; i < 8; i++)
        array2[i] = array1[i] + array2[i - 1];

    for (int i = 0; i < 8; i++)
        printf("%9.3f", array1[i]);
    printf("\n");

    for (int i = 0; i < 8; i++)
        printf("%9.3f", array2[i]);
    printf("\n");

    return 0;
}
