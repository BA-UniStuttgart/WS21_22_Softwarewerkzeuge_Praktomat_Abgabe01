#include <stdio.h>
#include <stdlib.h>

double calculate_interest(double capital, double interest_rate, unsigned int days) {
    return (capital * interest_rate * days) / (100 * 360);
}

int main() {

    double capital;
    double interest_rate;
    unsigned int days;

    printf("Please enter your capital in €, your interest rate in %% and the number of days in D followed by a blank: \n");
    scanf("%lf€ %lf%% %dT", &capital, &interest_rate, &days);

    printf("Interest = %.2lf €", calculate_interest(capital, interest_rate, days));

    return 0;
}