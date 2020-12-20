//INPUT: 95 90.99 'A'
//OUTPUT: i value is 90 x value is 90.00000 i value is 65

#include<stdio.h>
int main(){
   int i;
   float x;
   char ch;
   printf(" Enter an integer value, floating point value and a character");
   scanf("%d%f%c", &i,&x,&ch);
   i = x ;
   printf("i value is: %d ",i);
   x = i ;
   printf("x value is: %f ",x);
   i = ch ;
   printf("i value is: %d ",i);   
return 0;
}
