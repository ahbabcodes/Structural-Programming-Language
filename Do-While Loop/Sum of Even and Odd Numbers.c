//Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.
#include <stdio.h>
int main(){
    int i=1,even_sum=0,odd_sum=0;
    do{
        if (i % 2 == 0) {
            even_sum+=i;
        } else{
            odd_sum+=i;
        }
        i++;
    } while(i <= 50);
    printf("Sum of even numbers from 1 to 50: %d\n",even_sum);
    printf("Sum of odd numbers from 1 to 50: %d\n",odd_sum);
    return 0;
}
    

    