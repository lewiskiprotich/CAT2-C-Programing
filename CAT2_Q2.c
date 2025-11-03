/*
Name: Lewis Kiprotich
Reg No: PA106/G/28738/25
Description: Program to calculate gross pay, tax, and net pay based on hours worked and hourly wage.
Date: 3/11/2025
*/ 

#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;

    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours <= 40)
        grossPay = hours * rate;
    else
        grossPay = 40 * rate + (hours - 40) * rate * 1.5;

    // Calculate tax
    if (grossPay <= 600)
        tax = grossPay * 0.15;
    else
        tax = 600 * 0.15 + (grossPay - 600) * 0.20;

    // Calculate net pay
    netPay = grossPay - tax;

    // Print results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
