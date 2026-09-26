#include<stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int ar, ac, br, bc;
    printf("Enter rows and columns of matrix a: ");
    scanf("%d %d", &ar, &ac);
    printf("Enter elements of matrix a:\n");
    for(int i=0; i<ar; i++){
        for(int j=0; j<ac; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter rows and columns of matrix b: ");
    scanf("%d %d", &br, &bc);
    if(ac != br){
        printf("Matrix multiplication not possible.\n");
    }
    else{
        printf("Enter elements of matrix b:\n");
        for(int i=0; i<br; i++){
            for(int j=0; j<bc; j++){
                scanf("%d", &b[i][j]);
            }
        }
        for(int i=0; i<ar; i++){
            for(int j=0; j<bc; j++){
                for(int k=0; k<ac; k++){
                    product[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(int i=0; i<ar; i++){
            for(int j=0; j<bc; j++){
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}