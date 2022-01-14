#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// https://en.wikipedia.org/wiki/Trial_division
int is_prime(double num) {
    double lim = ceil(sqrt(num));

    for(double i = 2; i <= lim; i+=1) {
        if(fmod(num, i) == 0 && num != i) {
            return 0;
        }
    }

    return 1;
}

int main() {

    double number;

    printf("Please enter a number: ");
    scanf("%lf", &number);

    if(is_prime(number)) {
        printf("The number is a prime number");
    } else {
        printf("The number is not a prime number");
    }

    return 0;
}