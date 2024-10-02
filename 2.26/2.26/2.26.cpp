#include <iostream>
#include <stdio.h>

int x, y;

int main()
{
    printf("請輸入your value : ");
    scanf("%d,%d", &x, &y);
    if ((x % y) == 0)
        printf("是");
    else
        printf("否");

    return 0;
}
