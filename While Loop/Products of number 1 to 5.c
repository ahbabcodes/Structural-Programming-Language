#include<stdio.h>
int main(){
    int n=1, product=1;
    while (n<=5){
        product *= n;
        printf("integer: %d\n product: %d\n", n, product);
        n++;
    }
    return 0;
}