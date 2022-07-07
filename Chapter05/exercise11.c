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
    int area_code;

    while(area_code != 999)
    {
        printf("Please enter area_code(999 to quit): ");
        scanf("%d", &area_code);

        switch (area_code)
        {
        case 229: printf("Albany\n");   break;
        case 404: printf("Atlanta\n");  break;
        case 470: printf("Atlanta\n");  break;
        case 478: printf("Macon\n");    break;
        case 678: printf("Atlanta\n");  break;
        case 706: printf("Columbus\n"); break;
        case 762: printf("Columbus\n"); break;
        case 770: printf("Atlanta\n");  break;
        case 912: printf("Savannah\n"); break;
        default:  printf("Area code not recognized\n");   break;
        }
    }
    
    return 0;
}