#include<stdio.h>
int main(){
    int a[5]={11,22,36,5,2};
    int sum=0, *p;
    for(p=a; p<a+5; p++){
        sum+=*p;
    }
    printf("Sum: %d",sum);
    return 0;
}