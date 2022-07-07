/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief:
 * @Date:  2022.06.28
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
 */
#include <stdio.h>

void func1_a();
void func1_b();
void func1_c();
void func1_d();

int main()
{
    func1_a();     
    func1_b();    
    func1_c();   
    func1_d();

    return 0;
}


void func1_a()
{
    int i = 1, j = 2;
    i += j;
    printf("i = %d, j = %d\n", i, j);        /* 3 2 */
}


void func1_b()
{
    int i = 1, j = 2;
    i--;
    printf("i = %d, j = %d\n", i, j);        /* 0 2 */
}


void func1_c()
{
    int i = 1, j = 2;
    i * j / i;
    printf("i = %d, j = %d\n", i, j);        /* 1 2 */
}


void func1_d()
{
    int i = 1, j = 2;
    i % ++j;
    printf("i = %d, j = %d\n", i, j);        /* 1 3 */
}
