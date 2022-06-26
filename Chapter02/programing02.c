/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Book: C语言程序设计_现代方法 第二版
 * Function: printf ball volume
 */
#include <stdio.h>

#define PI 3.1415927

int main()
{
    float radius = 10.0f;
    double volume;

    // volume = 4 / 3 * PI * radius * radius * radius;
    volume = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("Volume = %.2f\n", volume);

    return 0;
}
