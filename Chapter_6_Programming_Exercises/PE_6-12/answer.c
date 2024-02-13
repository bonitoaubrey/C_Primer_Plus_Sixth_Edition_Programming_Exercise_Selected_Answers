/* Programming Exercise 6-12 */

#include <stdio.h>

int main(void) {
    float limit;
    float sum = 1;

    printf("Enter the limit: ");
    scanf("%f", &limit);

    for (float i = 1.0; i < limit; i+=1)
    {
        sum += sum / i;
    };

    printf("%f\n", sum);

    return 0;
}
