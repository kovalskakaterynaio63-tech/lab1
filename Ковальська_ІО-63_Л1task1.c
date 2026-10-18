#include "stdio.h"

int main(void) {
    double x, y;

    printf("Enter x: ");
    scanf("%lf", &x); // NOLINT(*-err34-c)

    if (x >= 2) {
        if (x <= 7) {
            y = x * x * x + 14;
            printf("y = %.2f\n", y);
        } else {
            if (x > 14) {
                y = -4 * x * x * x + 3 * x - 7;
                printf("y = %.2f\n", y);
            } else {
                printf("Function does not exist\n");
            }
        }
    } else {
        if (x > -13) {
            if (x <= -3) {
                y = -4 * x * x * x + 3 * x - 7;
                printf("y = %.2f\n", y);
            } else {
                printf("Function does not exist\n");
            }
        } else {
            printf("Function does not exist\n");
        }
    }

   return 0;
}

