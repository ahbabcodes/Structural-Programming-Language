#include<stdio.h>
int f(int n){
    if(n==3){
        return 9;
    }
    else{
        return n*n+f(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n%2!=0){
        int r=f(n);
        printf("r=%d",r);
    }
    else{
        printf("invalid input");
    }
    return 0;
}
