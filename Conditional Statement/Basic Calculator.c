#include<stdio.h>
int main(){
    float n1;
    float n2;
    char op;
    printf("Enter a number: ");
    scanf("%f", &n1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%f", &n2);
    if(op == '+'){
        printf("%.2f", n1+n2);
    }
    else if(op == '-'){
        printf("%.2f", n1-n2);
    }
    else if(op == '*'){
        printf("%.2f", n1*n2);
    }
    else if(op == '/'){
        printf("%.2f", n1/n2);
    }
    else{
        printf("Invalid operator");
    }
    return 0;
}