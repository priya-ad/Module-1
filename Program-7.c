

#include<stdio.h>
int main(){
   int i;
   float x;
   char ch;
   printf(" Enter an integer value, floating point value and a character");
   scanf("%d%f%c", &i,&x,&ch);
   i = x ;
   printf("i value is %d\n",i);
   x = i ;
   printf("x value is %f\n",x);
   i = ch ;
   printf("i value is %d\n",i);   
return 0;
}
