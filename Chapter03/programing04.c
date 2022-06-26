/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Book: C语言程序设计_现代方法 第二版
 * Function:
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &num1, &num2, &num3);

    printf("You entered %d.%d.%d\n", num1, num2, num3);

    return 0;
}
