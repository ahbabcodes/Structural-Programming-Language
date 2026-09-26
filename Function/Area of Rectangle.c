#include<stdio.h>
int AreaofRectangle(int l, int w){
    int area=l*w;
    return area;
}
int main(){
    int r=AreaofRectangle(5,10);
    printf("%d",r);
    return 0;
}