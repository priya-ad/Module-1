//INPUT: 2.4 1.12
//OUTPUT: Product= 2.69
#include <stdio.h>
int main() {
    double a,b,product;
    //printf("Enter two numbers: ");
    scanf("%lf%lf",&a,&b);  
     // Calculating product
    product = a * b;
    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %lf", product);
return 0;
}
