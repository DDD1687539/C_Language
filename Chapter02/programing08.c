/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Book: C语言程序设计_现代方法 第二版
 * Function:
 */
#include <stdio.h>

int main()
{
    float amount;
    float rate;
    float payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    amount = (amount - payment) * (1 + rate / (100.0f * 12.0f));
    printf("Balance remaining after first payment: %.2f\n", amount);

    amount = (amount - payment) * (1 + rate / (100.0f * 12.0f));
    printf("Balance remaining after second payment: %.2f\n", amount);

    amount = (amount - payment) * (1 + rate / (100.0f * 12.0f));
    printf("Balance remaining after third payment: %.2f\n", amount);  

    return 0;
}
