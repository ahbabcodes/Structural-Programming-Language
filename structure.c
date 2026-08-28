#include<stdio.h>
int main(){
    struct student{
        int roll;
        float gpa;
    };
    struct student s1;
    s1.roll=31;
    s1.gpa=3.25;
    printf("%d\n",s1.roll);
    printf("%.2f",s1.gpa);
}