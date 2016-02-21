#include <stdio.h>
#include <math.h>

int main(void) {
    double annual_rate, downpayment, price;
    double P, i, n, payment;
    
    printf("Please, enter purchase price\n");
    scanf("%lf", &price);
    
    printf("Please, enter downpayment\n");
    scanf("%lf", &downpayment);
    
    printf("Please, enter annual interest rate in percentage\n");
    scanf("%lf", &annual_rate);
    
    printf("Please, enter number of monthly payments\n");
    scanf("%lf", &n);
    
    P = price - downpayment;
    
    i = annual_rate / 100 / 12;
    
    payment =  (P * i) / (1 - pow(1+i, - n));
    
    printf("The borrowed amount is $%.2f\n", P);
    printf("The monthly payment is $%.2f\n", payment);
    
    return(0);
}