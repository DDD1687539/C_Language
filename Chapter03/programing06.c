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
    int num1, denom1;
    int num2, denom2;
    int result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
