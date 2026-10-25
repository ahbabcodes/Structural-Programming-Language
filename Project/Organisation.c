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
int printEmp(struct emp e){ //emp info
    printf("\nEmployee ID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nDepartment: %s", e.dept);
    printf("\nPosition: %s", e.post);
    printf("\nEmail: %s", e.email);
    printf("\nPhone: %s", e.phone);
    printf("\nSalary: %.2f", e.salary);
    printf("\nAge: %d", e.age);
    printf("\nDate of Joining: %02d/%02d/%04d\n", e.day, e.month, e.year);
    return 0;
}
int main(){
    int n, total=0;
    do{
        printf("Enter the number of organisations: ");
        scanf("%d", &n);
        flushInput(); //clear leftover newline so fgets doesn't skip
    }while(n<1); //No increemant
    struct org o[n];
    for(int i=0; i<n; i++){
        printf("\nEnter details for Organisation %d:\n", i+1);
        printf("Name: ");
        fgets(o[i].name, sizeof(o[i].name), stdin);
        o[i].name[strcspn(o[i].name, "\n")] = 0; // Remove newline character
        printf("Address: ");
        fgets(o[i].address, sizeof(o[i].address), stdin);
        o[i].address[strcspn(o[i].address, "\n")] = 0; 
        printf("Type: ");
        fgets(o[i].type, sizeof(o[i].type), stdin);
        o[i].type[strcspn(o[i].type, "\n")] = 0;
        printf("Email: ");
        fgets(o[i].email, sizeof(o[i].email), stdin);
        o[i].email[strcspn(o[i].email, "\n")] = 0;
        printf("Phone: ");
        fgets(o[i].phone, sizeof(o[i].phone), stdin);
        o[i].phone[strcspn(o[i].phone, "\n")] = 0;
        printf("Website: ");
        fgets(o[i].website, sizeof(o[i].website), stdin);
        o[i].website[strcspn(o[i].website, "\n")] = 0;
        printf("Founded Year: ");
        scanf("%d", &o[i].founded);
        flushInput(); 
    do{
        printf("\nEnter the number of employees for that organisation: ");
        scanf("%d", &o[i].count);
        flushInput();
    }while(o[0].count<i); //No increemant, infinite loop
    o[i].start=total;
    total+=o[i].count;
}
struct emp e[total];
for(int i=0; i<n; i++){
    for(int j=0; j<o[i].count; j++){
        struct emp t;
        int idx = o[i].start+j;
        printf("\n%s - Employee %d:\n", o[i].name, j+1);
        int d;
        do{
            d=0;
            printf("Employee ID: ");
            scanf("%d", &t.id);
            flushInput(); 
            for(int k=0; k<idx; k++){
                if(e[k].id==t.id){
                    printf("Duplicate ID found. Please enter a unique ID.\n");
                    d = 1;
                    break;
                }
            }
        }while(d);
        printf("Name: ");
        fgets(t.name, sizeof(t.name), stdin);
        t.name[strcspn(t.name, "\n")] = 0;
        printf("Department: ");
        fgets(t.dept, sizeof(t.dept), stdin);
        t.dept[strcspn(t.dept, "\n")] = 0;
        printf("Position: ");
        fgets(t.post, sizeof(t.post), stdin);
        t.post[strcspn(t.post, "\n")] = 0;
        printf("Email: ");
        fgets(t.email, sizeof(t.email), stdin);
        t.email[strcspn(t.email, "\n")] = 0;
        printf("Phone: ");
        fgets(t.phone, sizeof(t.phone), stdin);
        t.phone[strcspn(t.phone, "\n")] = 0;
        printf("Age: ");
        scanf("%d", &t.age);
        printf("Joining Date (DD MM YYYY): ");
        scanf("%d %d %d", &t.day, &t.month, &t.year);
        do{
            printf("Salary: ");
            scanf("%f", &t.salary);
            flushInput();
        }while(t.salary<0);
        e[idx] = t;   //store the finished employee
    }
}