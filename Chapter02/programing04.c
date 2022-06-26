/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Book: C语言程序设计_现代方法 第二版
 * Function: shows the corresponding amount after the 5% tax increase
 */
#include <stdio.h>

int main()
{
    float amount;

    printf("Enter an number: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount * (1 + 0.05));

    return 0;
}
