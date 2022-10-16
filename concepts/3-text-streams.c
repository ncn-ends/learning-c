#include <stdio.h>

int badCopyCat(void);
int doSomething(void);
long getValueOfEOF(void);

int main() {
    // badCopyCat();
    // goodCopyCat();
    getValueOfEOF();
    return(0);
}

/* reads terminal input and prints input when you press enter */
int badCopyCat() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

/* same as badCopyCat, except written more nicely */
int goodCopyCat() {
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}

long getValueOfEOF() {
    long nc;
    nc = 0;
    while (getchar() != EOF) 
        ++nc;
    printf("%ld\n", nc);
}