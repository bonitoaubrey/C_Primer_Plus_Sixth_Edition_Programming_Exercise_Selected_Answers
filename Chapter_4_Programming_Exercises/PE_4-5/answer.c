/* Programming Exercise 4-5 */

#include <stdio.h>

int main(void) {
    float download_speed;
    float file_size;

    printf("Write download speed in megabits per second: ");
    scanf("%f", &download_speed);
    printf("Write size of a file in megabytes: ");
    scanf("%f", &file_size);
    printf("At %.2f megabites per second, a file of %.2f megabytes downloads in %.2f seconds\n",
           download_speed, file_size, file_size * 8 / download_speed);

    return 0;
}
