#include <stdio.h>
#include <math.h>

int main(void) {
    double annual_rate, downpayment, price;
    double P, i, n, payment;

    printf("This program calculates the monthly payments of car loan");

    printf("Please, enter purchase price\n");
    scanf_s("%lf", &price);

    printf("Please, enter downpayment\n");
    scanf_s("%lf", &downpayment);

    printf("Please, enter annual interest rate in percentage\n");
    scanf_s("%lf", &annual_rate);

    printf("Please, enter number of monthly payments\n");
    scanf_s("%lf", &n);

    P = price - downpayment;

    i = annual_rate / 100 / 12;

    payment =  (P * i) / (1 - pow(1+i, - n));

    printf("The borrowed amount is $%.2f\n", P);
    printf("The monthly payment is $%.2f\n", payment);

    getchar();
    getchar();
    return(0);
}
