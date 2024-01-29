/* Programming Exercise 4-7 */

#include <float.h>
#include <stdio.h>

int main(void) {
    float f = 1.0 / 3.0;
    double d = 1.0 / 3.0;
    
    printf("%.4f\n", f);
    printf("%.4f\n\n", d);

    printf("%.12f\n", f);
    printf("%.12f\n\n", d);

    printf("%.16f\n", f);
    printf("%.16f\n\n", d);

    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);
    return 0;
}
