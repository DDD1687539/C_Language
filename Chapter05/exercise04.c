/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief: 
 * @Date:  2022.07.07
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
 */

#include <stdio.h>

int main()
{
    int i, j;

    printf("Please enter a number: ");
    scanf("%d", &i);
    printf("Please enter another number: ");
    scanf("%d", &j);

    if(i < j)
        printf("Comparision result: -1");
    else if(i > j)
        printf("Comparision result:  1");
    else
        printf("Comparision result:  0");

    return 0;
}
