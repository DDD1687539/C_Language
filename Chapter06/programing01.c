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
    float max = 0.0f;
    float number;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if(number <= 0.0f)
            break;
        if(number > max)
            max = number;
    }
    
    printf("The largest number entered was %.2f\n", max);

    return 0;
}


