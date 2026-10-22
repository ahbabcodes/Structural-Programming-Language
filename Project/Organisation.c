/*Target: Details of Organisations which includes their names, addresses, and contact information such as e-mail, phone, website. Also the information about the employees working in the organisation, including their names, positions, and contact details such as e-mail and phone numbers. 
Way to implement: Structures, loops, array, functions etc.*/
#include<stdio.h>
#include<string.h>
struct emp{ //employee
    char name[50], dept[50], post[50], email[50], phone[15];
    float salary;
    int age, id, day, month, year;
};
struct org{ //organisation
    char name[50], address[100], type[20], email[50], phone[15], website[50];
    int founded, count, start;
};
int input(char *label, char *s, int size){
    printf("%s: ", label);
    fgets(s, size, stdin);
    s[strcspn(s, "\n")] = 0; // Removes newline character
    return 0;
}
