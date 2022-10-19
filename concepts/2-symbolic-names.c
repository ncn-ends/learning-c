#include <stdio.h>
#include "../utils/asd.c"

int getValue(void);

#define LOWER "trying"
#define MIDDLE "this"
#define UPPER "out"
#define VALUE getValue()

int main() {
    printf("%s %s %s\n", LOWER, MIDDLE, UPPER);
    printf("%d", VALUE);
    printf("\n");
    printf("%d", asd());
    printf("\n");
}

int getValue() { 
    return 5;
}
