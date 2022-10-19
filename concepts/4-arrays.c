#include <stdio.h>
#include <stdbool.h>

int placeInAlphabet(char);
void printCount(int[]);

#define ALPHABET_LENGTH 26
#define CAPITALS_START 65
#define CAPITALS_END 90
#define LOWERS_START 97
#define LOWERS_END 122
#define BROAD_START CAPITALS_START
#define BROAD_END LOWER_END

int main() { 
        char c;
        int alphabetCounts[ALPHABET_LENGTH] = {0};
        
                while((c = getchar()) != EOF) {
                        alphabetCounts[placeInAlphabet(c)]++;
                        if (c == '\n') {
                                printCount(alphabetCounts);
                                for (int i = 0; i < ALPHABET_LENGTH; i++) {
                                        alphabetCounts[i] = 0;
                                }
                        }
                }

        printf("\n");
        return(0);
}

void printCount(int alphabetCounts[]) {
        for (int i = 0; i < ALPHABET_LENGTH; i++) {
                printf("%c ", LOWERS_START + i);
        }
        printf("\n");
        for (int i = 0; i < ALPHABET_LENGTH; i++) {
                printf("%d ", alphabetCounts[i]);
        }
        printf("\n\n");
}

int placeInAlphabet(char c) {
        int cDigit = c;

        bool withinCapitals = cDigit >= CAPITALS_START && cDigit <= CAPITALS_END;
        if (withinCapitals) return cDigit - CAPITALS_START;

        bool withinLowers = cDigit >= LOWERS_START && cDigit <= LOWERS_END;
        if (withinLowers) return cDigit - LOWERS_START;

        return -1;
}


/* why does this work with int c? */
// int main()
// {
//   int characters = 0;
//   int lines = 0;
//   int c;
//   while ((c = getchar()) != EOF) {
//     characters++;
//     if (c == '\n') {
//       lines++;
//       characters--;  // ignore \n
//     }
//   }
//   printf("lines: %8d\n", lines);
//   printf("Chars: %8d", characters);

//   return 0;
// }