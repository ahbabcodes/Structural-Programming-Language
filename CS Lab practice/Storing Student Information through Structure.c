#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float gpa;
    char name[50];
};
int main(){
    struct student students[3];
    for(int i=0; i<3; i++){
        printf("Student %d info:\n", i+1);
        printf("Name: ");
        fgets(students[i].name, 50, stdin);  
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
        while(getchar() != '\n');
        printf("\n");
    }
    printf("Insert Student roll:\n");
    int roll;
    scanf("%d", &roll);
    int found = 0;  
    for(int i=0; i<3; i++){
        if (roll == students[i].roll){
            printf("\nStudent %d\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("Roll: %d\n", students[i].roll);
            printf("GPA: %.2f\n", students[i].gpa);  
            found = 1;
            break;
        }
    }
    if(!found) printf("Student not found.\n"); 
    return 0; 
}
        
    