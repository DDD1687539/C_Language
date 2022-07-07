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
    int i1, i2, i3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i1, &i2, &i3);

    printf("The reversal is: %d%d%d\n", i3, i2, i1);
    return 0;
}

