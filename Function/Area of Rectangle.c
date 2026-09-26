#include<stdio.h>
int AreaofRectangle(int l, int w){
    int area=l*w;
    return area;
}
int main(){
    int l,w;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d",&l,&w);
    int r=AreaofRectangle(l,w);
    printf("%d",r);
    return 0;
}