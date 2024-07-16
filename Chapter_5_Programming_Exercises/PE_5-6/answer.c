#include <stdio.h>

int main(void) {
    int value;
    int sum = 0;

    printf("How far the calculation shoud procced?\n");
    scanf("%d", &value);
    for (int i = 1; value--; i++)
        sum += i * i;
    printf("sum = %d\n", sum);
    
    return 0;
}
