#include<stdio.h>
int main(){
    int n [3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d,", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}