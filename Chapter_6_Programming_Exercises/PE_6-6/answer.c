/* Programming Exercise 6-6 */

#include <stdio.h>

int main(void) {
    int start;
    int end;

    printf("Input the lower limit for the table: ");
    scanf("%d", &start);
    printf("Input the upper limit for the table: ");
    scanf("%d", &end);
    
    while (start <= end) {
        printf("%8d %8d %8d\n", start, start * start, start * start * start);
        start++;
    }

    return 0;
}
