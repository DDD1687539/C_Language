/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Book: C语言程序设计_现代方法 第二版
 * Function: Display integers and floating point numbers
 *           in a variety of formats
 */

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    //%5.3d ==> 以十进制形式显示变量i, 
    //且至少占用5个字符的空间并至少有3位数字,
    //因为变量i只有2个字符长度, 
    //所以要添加一个额外的零来保证有3位数字
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    x = 1234566.812f;
    printf("x = %g\n", x);

    // |40|   40|40   |  040|
    // |   839.210|8.392e+002|839.21    |

    printf("Format[%%d]:[%d]\n", 012);
    printf("Format[%%i]:[%i]\n", 012);

    return 0;
}
