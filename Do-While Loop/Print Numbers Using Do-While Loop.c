#include<stdio.h>
int main(){
    int i=1;
    printf("Numbers from 1 to 10 are:\n");
    do{
        printf("%d\n",i);
        i++;
    } while(i<=10);
    i=10;
    printf("Numbers from 10 to 1 are:\n");
    do{
        printf("%d\n",i);
        i--;
    } while(i>=1);
    return 0;
}
