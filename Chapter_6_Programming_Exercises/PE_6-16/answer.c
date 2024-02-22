/* Programming Exercise 6-16 */

#include <stdio.h>

int main(void) {
    float Daphne = 100;
    float Deirdre = 100;
    int year;

    for (year = 0; Daphne >= Deirdre; year++) {
        Daphne += 10;
        Deirdre += Deirdre * 5 / 100;
    };
    
    printf("Year: %d   Daphne: %.2f   Deirdre: %.2f\n", year, Daphne, Deirdre);

    return 0;
}
