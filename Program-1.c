//INPUT: 5
//OUTPUT: You entered: 5
#include <stdio.h>
int main() {   
    int number;
   
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d", number);
    
    return 0;
}
