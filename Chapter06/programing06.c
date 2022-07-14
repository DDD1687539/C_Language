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
    int i = 2;
    int n;

    printf("Please enter a number: ");
    scanf("%d", &n);

    while (1)
    {
        if(i * i <= n)
            printf("%d\n", i * i);
        else
            break;
        i += 2;
    }
    
    return 0;
}


