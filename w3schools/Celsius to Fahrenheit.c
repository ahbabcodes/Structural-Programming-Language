#include <stdio.h>
int main(){
    int C;
    scanf("%d", &C);
    float F = (C*9.0/5.0)+32.0;
    printf("%d Celsius = %.1f Fahrenheit\n", C, F);
    return 0;
}
