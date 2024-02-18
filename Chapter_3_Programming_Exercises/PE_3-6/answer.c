/* Programming Exercise 3-6 */

#include <stdio.h>

#define MOLECULE_OF_WATER_MASS 3e-23
#define QUART_OF_WATER_MASS 950

int main(void) {
    double water_quarts;
    printf("Enter an amount of water in quarts: ");
    scanf("%lf", &water_quarts);

    printf("The number of water molecules in that amount: %e\n",
           water_quarts * QUART_OF_WATER_MASS / MOLECULE_OF_WATER_MASS);

    return 0;
}
