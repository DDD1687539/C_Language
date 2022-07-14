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
    int start, days;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (int i = 1; i < start; i++)
    {
        printf("   ");
    }

    for (int i = 1; i <= days; i++)
    {
        printf("%3d", i);
        if((i + start - 1) % 7 == 0)
            printf("\n");
    }

    printf("\n");
    exit(EXIT_SUCCESS);
}


