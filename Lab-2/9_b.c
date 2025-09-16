#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int x=2, y=5;
    x^=y;
    y^=x;
    x^=y;
    printf("swapped %d, %d", x, y);

    return 0;
}