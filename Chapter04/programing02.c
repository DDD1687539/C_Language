/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief:
 * @Date:  2022.06.28
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
 */

#include <stdio.h>

int main()
{   
    int number;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    printf("The reversal is: %d%d%d\n", number % 10, number % 100 / 10, number / 100);

    return 0;
}
