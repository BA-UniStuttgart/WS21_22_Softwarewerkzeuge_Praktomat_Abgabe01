#include <stdio.h>
#include <stdlib.h>

unsigned int compute_cross_total(unsigned int num) {
    unsigned int cross_total = 0;

    while(num) {
        cross_total += num % 10;
        num /= 10;
    }

    return cross_total;
}

int main() {
    unsigned int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    printf("The cross total is %d", compute_cross_total(number));

    return 0;
}