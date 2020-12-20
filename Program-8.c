
#include<stdio.h>

int main()
{
    int x = 12, y = 1;
    printf(" Enter the values of x and y");
    sacnf("%d%d", &x,&y);
    
   // y = ++x; // increment the value of x by 1 then assign this new value to y

   // printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d  ", y=++x);
    printf("y= %d  ",y=x++);
  //  y = --x; // decrement the value of x by 1 then assign this new value to y

    //printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d  ", y=--x);
  printf("y=%d  ",y=x--);
  

    // Signal to operating system everything works fine
    return 0;
}

