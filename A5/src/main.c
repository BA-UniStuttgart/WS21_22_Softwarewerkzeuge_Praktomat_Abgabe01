#include <stdio.h>
#include <stdlib.h>

#define ZERO "ZERO"
#define ONE "ONE"
#define TWO "TWO"
#define THREE "THREE"
#define FOUR "FOUR"
#define FIVE "FIVE"
#define SIX "SIX"
#define SEVEN "SEVEN"
#define EIGHT "EIGHT"
#define NINE "NINE"

const char* DIGIT_TEXTS[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void print_digits(unsigned int num) {
    const char* text[3];

    for(int i = 2; i >= 0; i--) {
        unsigned int digit = num % 10;
        num /= 10;

        text[i] = DIGIT_TEXTS[digit];
    }

    printf("%s %s %s", text[0], text[1], text[2]);
}

int main() {

    unsigned int number;
    
    printf("Please enter a number (highest 999): ");
    scanf("%d", &number);

    print_digits(number);

    return 0;
}
