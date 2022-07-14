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
    float e = 0.0f;
    int n;
    float diff = 0.0001f;

    printf("Please enter n: ");
    scanf("%d", &n);

    e = 1.0f;
    int denominator = 1;

    for (int i = 1; i <= n; i++)
    {
        denominator *= i;
        if(1.0f / denominator < diff)
            break;
        e += (1.0f / denominator);
    }

    printf("The mathematical constant e is approximately equal to %f\n", e);

    return 0;
}

