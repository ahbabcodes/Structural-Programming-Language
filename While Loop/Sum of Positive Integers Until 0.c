#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter positive integers (0 to stop):\n");
    while (1) {
        scanf("%d", &n);
        if (n <= 0) {
            break;
        }
        sum += n;
    }
    printf("Sum of positive integers: %d\n", sum);
    return 0;
}





