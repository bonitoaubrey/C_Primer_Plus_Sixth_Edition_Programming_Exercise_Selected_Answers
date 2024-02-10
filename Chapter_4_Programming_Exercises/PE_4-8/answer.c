/* Programming Exercise 4-8 */

#include <stdio.h>

#define LITERS_IN_GALLON 3.785
#define KILOMETERS_IN_MILE 1.609

int main(void) {
    float miles_traveled;
    float gallons_of_gasolene_consumed;

    printf("Enter the number of miles traveled: ");
    scanf("%f", &miles_traveled);
    printf("Enter the number of gallons of gasolene consumed: ");
    scanf("%f", &gallons_of_gasolene_consumed);

    printf("mile-per-gallon: %.1f\n", miles_traveled / gallons_of_gasolene_consumed);

    printf("liters-per-100-km: %.1f\n",
           (gallons_of_gasolene_consumed * LITERS_IN_GALLON) /
           (miles_traveled * KILOMETERS_IN_MILE) * 100);

    return 0;
}
