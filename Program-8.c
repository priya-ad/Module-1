//INPUT:12
//OUTPUT: y=13  y=13  y=13  y=13
#include<stdio.h>
int main()
{
    int x, y;
    printf(" Enter the value of x: ");
    scanf("%d", &x);
    printf("y = %d  ",y=++x);
    printf("y = %d  ",y=x++);
    printf("y = %d  ",y=--x);
    printf("y = %d  ",y=x--);
    return 0;
}

