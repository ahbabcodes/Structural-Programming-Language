//Write a C program that prompts the user to enter a positive integer and then calculates and prints the sum of the squares of each digit in that number using a do-while loop

#include<stdio.h>
int main(){
    int num,digit,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    if(num<=0){
        printf("Please enter a positive integer.\n");
        return 1;
    }
    do{
        digit=num%10;
        sum+=digit*digit;
        num/=10;
    } while(num>0);
    printf("Sum of squares of digits:%d\n",sum);
    return 0;
}