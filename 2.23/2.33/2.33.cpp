#include "pch.h"
#include <stdio.h>

int x, y, z;
int max, min;

int main()
{
    printf("請輸入your value : ");
    scanf("%d,%d,%d", &x, &y, &z);

    if (x == y && y == z && z == x) {
        printf("error");
    }

    max = x;

    if (y > max) max = y;
    if (z > max) max = z;

    if (y < min) min = y;
    if (z < min) min = z;

    printf("最大整數: %d\n", max);
    printf("最小整數: %d\n", min);

    return 0;

}