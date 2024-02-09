/* Programming Exercise 4-6 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char first_name[40];
    char second_name[40];

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your second name: ");
    scanf("%s", second_name);

    printf("%s %s\n", first_name, second_name);
    printf("%*zd %*zd\n", strlen(first_name), strlen(first_name), strlen(second_name), strlen(second_name));

    printf("%s %s\n", first_name, second_name);
    printf("%-*zd %-*zd\n", strlen(first_name), strlen(first_name), strlen(second_name), strlen(second_name));

    return 0;
}
