#include<stdio.h>
int f1(int x, int y) {
    return x+y;
}
int f2(int x) {
    return ((x*x)+(2*x)+5);
}
int f3(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i*i;
    }
    return sum;
}
int f4(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int f5(int n,int r){
    int factorial1=1;
    for(int i=1;i<=n;i++){
        factorial1*=i;
    }
    int factorial2=1;
    for(int i=1;i<=r;i++){
        factorial2*=i;
    }
    int factorial3=1;
    for(int i=1;i<=(n-r);i++){
        factorial3*=i;
    }
    return factorial1/(factorial2*factorial3);
}
int f6(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main() {
    int r1 = f1(5, 10);
    printf("r1=%d\n", r1);
    int r2 = f2(5);
    printf("r2=%d\n", r2);
    int r3 = f3(5);
    printf("r3=%d\n", r3);
    int r4 = f4(5);
    printf("r4=%d\n", r4);
    int r5 = f5(5, 2);
    printf("r5=%d\n", r5);
    int r6 = f6(100);
    printf("r6=%d\n",r6);
    return 0;
}
