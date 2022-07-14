/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief: 
 * @Date:  2022.07.14
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
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

    int count;
    printf("Enter payment times: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        amount = (amount - payment) * (1 + rate / (100.0f * 12.0f));
        printf("Balance remaining after %d payment: %f\n", i, amount);
    }

    return 0;
}

