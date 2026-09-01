#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter positive integers (0 to stop):\n");
    do {
        scanf("%d", &n);
        if (n > 0) {
            sum += n;
        }
    } while (n != 0);
    printf("Sum of positive integers: %d\n", sum);
    return 0;
}