#include <stdio.h>
#include<math.h>
//nCr=n!/r!(n-r)!
int main() {
    int n, i, factorial1;
    factorial1 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        factorial1 *= i;
    }
    
    printf("%d\n", factorial1);
    int r, factorial2 = 1;
    printf("Enter a number: ");
    scanf("%d", &r);
    
    for (i = 1; i <= r; i++) {
        factorial2 *= i;
    }
    printf("%d\n",factorial2);
    int c, factorial3=1;
    c = n-r;
    for(i = 1; i <= c; i++){
        factorial3 *= i;
    }
    printf("%d",factorial3);
    return 0;
}
