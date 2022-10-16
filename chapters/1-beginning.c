#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    printf("╔%.*s╗\n", 19, "===================");
    printf("║ F to C conversion ║\n");
    printf("╚%.*s╝\n", 19, "===================");
    printf("\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f\t%10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}