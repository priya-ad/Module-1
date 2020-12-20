
#include<stdio.h>

int main()
{
    int x = 12, y;
    printf(" Enter the values of x and y");
    sacnf("%d%d", &x,&y);
       
    printf("y = %d  ", y=++x);
    printf("y= %d  ",y=x++);
  
   printf("y = %d  ", y=--x);
   printf("y=%d  ",y=x--);
  
     return 0;
}

