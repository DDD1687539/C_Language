/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief: 
 * @Date:  2022.07.07
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 1;

    switch (i % 3)
    {
    case 0: printf("zero\n");
    case 1: printf("one\n");
    case 2: printf("two\n");
    }

    return 0;
}
