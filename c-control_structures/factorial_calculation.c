#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;
    int i;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }
    
    i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    
    printf("Factorial of %d is: %llu\n", num, factorial);
    
    return 0;
}
