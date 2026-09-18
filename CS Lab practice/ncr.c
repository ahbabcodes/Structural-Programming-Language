#include <stdio.h>
//nCr=n!/r!(n-r)!
int main() {
    int n, i, factorial1;
    factorial1 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        factorial1 *= i;
    }
    int r, factorial2 = 1;
    printf("Enter a number: ");
    scanf("%d", &r);
    
    for (i = 1; i <= r; i++) {
        factorial2 *= i;
    }
    int factorial3=1;
    for(i = 1; i <= (n-r); i++){
        factorial3 *= i;
    }
    int binomial;
    binomial = factorial1/(factorial2*factorial3);
    printf("%d",binomial);
    return 0;
}
