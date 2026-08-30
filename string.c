#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: %s\n", str);
    int length = 0;
    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }
    printf("Length of string: %d\n", length);
    printf("Characters in the string:\n ");
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c\n ", str[i]);
    }
    return 0;
}