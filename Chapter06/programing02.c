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
    int m, n;
    int remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (1)
    {
        if(n == 0)
            break;
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);
    return 0;
}


