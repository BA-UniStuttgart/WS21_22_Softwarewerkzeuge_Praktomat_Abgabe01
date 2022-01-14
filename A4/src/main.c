#include <stdio.h>
#include <stdlib.h>

int is_leap_year(unsigned int year) {

    if(year % 100 == 0) {
        if(year % 400 == 0) {
            return 1;
        }

        return 0;
    }

    if(year % 4 == 0) {
        return 1;
    }

    return 0;
}

int main() {

    unsigned int year;

    printf("Please enter a year: ");
    scanf("%d", &year);

    if(is_leap_year(year)) {
        printf("Leap year - YES");
    } else {
        printf("Leap year - NO");
    }

    return 0;
}