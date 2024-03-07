/* Programming Exercise 7-4 */

#include <stdio.h>

int main(void) {
    int number_of_substitutions = 0;
    
    for (char ch = getchar(); ch != '#'; ch = getchar()) {
        if (ch == '.') {
            printf("!");
            number_of_substitutions++;
        }
        else if (ch == '!') {
            printf("!!");
            number_of_substitutions++;
        }
        else
            printf("%c", ch);
    }
    printf("\number of substitutions = %d\n", number_of_substitutions);

    return 0;
}
