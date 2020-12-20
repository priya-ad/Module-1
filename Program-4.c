//INPUT: 25
//OUTPUT: Quotient = 6 Remainder = 1 
#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend and Divisor ");
    scanf("%d%d", &dividend, &divisor);
   
    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d  ", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
