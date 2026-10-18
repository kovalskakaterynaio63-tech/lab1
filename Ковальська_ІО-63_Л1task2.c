#include <stdio.h>

int main(void) {
    double x, y;

    printf("Enter x: ");
    scanf("%lf", &x);

    if (x >= 2 && x <= 7) {
        y = x * x * x + 14;
        printf("y = %.2f\n", y);
    } else if ((x > -13 && x <= -3) || x > 14) {
        y = -4 * x * x * x + 3 * x - 7;
        printf("y = %.2f\n", y);
    } else {
        printf("Function does not exist\n");
    }

    return 0;
}
