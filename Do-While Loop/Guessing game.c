#include<stdio.h>
int main(){
    int n=6;
    int guess;
    do{
        printf("Enter a number: ");
        scanf("%d",&guess);
    } while(guess!=n);
    printf("You guessed the correct number!\n");
    return 0;
} 