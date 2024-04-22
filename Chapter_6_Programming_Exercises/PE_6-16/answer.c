/* Programming Exercise 6-16 */

#include <stdio.h>

int main(void) {
    float Daphne_investment = 100;
    float Deirdre_investment = 100;
    int year;

    for (year = 0; Daphne_investment >= Deirdre_investment; year++) {
        Daphne_investment += 10;
        Deirdre_investment += Deirdre_investment * 5 / 100;
    };
    
    printf("Year: %d   Daphne: %.2f   Deirdre: %.2f\n",
           year, Daphne_investment, Deirdre_investment);

    return 0;
}
