/* Programming Exercise 3-8 */

#include <stdio.h>

const int CUPS_IN_PINT = 2;
const int OUNCES_IN_CUP = 8;
const int TABLESPOONS_IN_ONCE = 2;
const int TEASPOONS_IN_TABLESPOONS = 3;

int main(void) {
    float cups;
    int pints;
    int ounces;
    int tablespoons;
    int teaspoons;

    printf("Enter a volume in cups: ");
    scanf("%f", &cups);
    pints = cups / CUPS_IN_PINT;
    ounces = (int)(cups * OUNCES_IN_CUP) % (OUNCES_IN_CUP * CUPS_IN_PINT);
    tablespoons = (int)(cups * OUNCES_IN_CUP * TABLESPOONS_IN_ONCE) % TABLESPOONS_IN_ONCE;
    teaspoons = (int)(cups * OUNCES_IN_CUP * TABLESPOONS_IN_ONCE * TEASPOONS_IN_TABLESPOONS) % TEASPOONS_IN_TABLESPOONS;


    printf("The equivalent volumes: %d pint(s), %d ounce(s), %d tablespoon(s) and %d tespoon(s)\n", 
             pints, ounces, tablespoons, teaspoons);

    return 0;
}
