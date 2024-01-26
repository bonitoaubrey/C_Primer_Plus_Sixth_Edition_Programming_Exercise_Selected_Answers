/* Programming Exercise 4-1 */

#include <stdio.h>

int main(void) {
    char first_name[20];
    char last_name[20];

    printf("Write your first name: ");
    scanf("%s", first_name);
    printf("Write your last name: ");
    scanf("%s", last_name);
    printf("%s %s\n", last_name, first_name);

    return 0;
}
