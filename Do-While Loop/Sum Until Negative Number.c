//Write a C program that prompts the user to enter a series of numbers until they input a negative number. Calculate and print the sum of all entered numbers using a do-while loop.

#include <stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter a number (Less than 0 to stop):");
    do {
        scanf("%d",&num);
        if(num>=0){
            sum+=num;
        }
    }while(num>=0);
    printf("Sum of all non-negative numbers:%d\n",sum);
    return 0;
}
    
    
    