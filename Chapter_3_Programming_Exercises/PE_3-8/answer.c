/* Programming Exercise 3-8 */

#include <stdio.h>

int main(void) {
    float cups;
    int pins;
    int ounces;
    int tablespoons;
    int teaspoons;

    printf("Enter a volume in cups: \n");
    scanf("%f", &cups);
    teaspoons = cups * 48;
    printf("The equivalent volumes: ");
    pins = teaspoons / 96;
    printf("%d pin(s) ", pins);
    ounces = teaspoons % 96 / 6;
    printf("%d ounce(s) ", ounces);
    tablespoons = teaspoons % 96 % 6 / 3;
    teaspoons = teaspoons % 3;
    printf("%d tablespoon(s) ", tablespoons);
    printf("%d teaspoon(s)", teaspoons);
    printf("\n");
    return 0;
}
