/*
 * Copyright (c) 2022 user1687569
 */
/*
 * Book: C语言程序设计_现代方法 第二版
 * Function: print uninitialized variables
 */

#include <stdio.h>

int main(void)
{
    int height, length, width;
    float volume;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cubic inches): %f\n", volume);

    return 0;
}
