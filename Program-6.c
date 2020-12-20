//INPUT: 10 2
//OUTPUT: 20
include <stdio.h>
//main method for run c application
int main()
{
int a,b,result;
printf("Enter 2 numbers for Arithmetic evaluation operation\n");
scanf("%d%d",&a,&b);
result = a+b*a/b-a%b;
printf("Arithmetic expression evaluation of %d and %d is = %d \n",a,b,result);
return 0;
}
