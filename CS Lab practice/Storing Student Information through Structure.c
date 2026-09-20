#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        int roll;
        float gpa;
        char name[20];
    };
    struct student students[3];
    for(int i=0; i<3; i++){
        printf("Student %d info:\n", i+1);
        printf("Name:");
        scanf("%s", &students[i].name);
        printf("\nRoll:");
        scanf("%d", &students[i].roll);
        printf("\nGPA:");
        scanf("%f", &students[i].gpa);
        printf("\n");
    }
    printf("Insert Student roll:\n");
    int roll;
    scanf("%d", &roll);
    for(int i=0; i<3; i++){
        if (roll == students[i].roll){
            printf("\nStudent %d\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("Roll: %d\n", students[i].roll);
            printf("GPA: %.2f", students[i].gpa);
            break;
        }
    }
    return 0;
}









