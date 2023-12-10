/* Programming Exercise 3-5 */

#include <stdio.h>

const double sec_in_year = 3.156e10;

int main(void) {
    int year;

    printf("Enter your age: ");
    scanf("%d", &year);

    printf("You age in seconds is: %.3e\n", year * sec_in_year);

    return 0;
}
