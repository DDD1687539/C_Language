/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief: 
 * @Date:  2022.07.14
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i, n;
    int odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for(square = 1; i <= n; ++i, odd += 2)
    {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    exit(EXIT_SUCCESS);
}


