/* Programming Exercise 4-5 */

#include <stdio.h>

int main(void) {
    float download_speed;
    float size_of_file;

    printf("Enter download speed in megabits per second: ");
    scanf("%f", &download_speed);
    printf("Enter size of a file in megabytes: ");
    scanf("%f", &size_of_file);

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",
           download_speed, size_of_file, size_of_file * 8 / download_speed);

    return 0;
}
