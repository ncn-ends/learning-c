#include <stdio.h>

int ncnPow(int, int);
void powTestWrapper(int);
void printPwr(int, int, int);

// formal argument = parameter
// actual argument = argument

int main() {
        powTestWrapper(5);

        printPwr(5, 5, ncnPow(5, 5));
        printPwr(13, 5, ncnPow(13, 5));
        printPwr(11, 11, ncnPow(11, 11));

        printf("\n");
        return(0);
}

void powTestWrapper(int range) {
        for (int i = 1; i < range; i++) {
                printPwr(i, 2, ncnPow(i, 2));
                printPwr(i, 3, ncnPow(i, 3));
        }
}

void printPwr(int base, int exponent, int power) {
        printf("%d to the power of %d is %d", base, exponent, power);
        printf("\n");
}

int ncnPow(int x, int y) {
        int acc = x;
        for (int i = y - 1; i > 0; i--) {
                acc = acc * x;
        }
        return acc;
}