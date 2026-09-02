#include <stdio.h>
int main(){
    char name[50];
    char dob[15];
    char mobile[15];
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    printf("Enter your date of birth:");
    scanf("%14s", dob);
    printf("Enter your mobile number:");
    scanf("%14s", mobile);
    printf("\nName: %s",name);
    printf("Date of Birth: %s\n", dob);
    printf("Mobile Number: %s\n", mobile);
    return 0;
}






