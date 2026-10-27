#include<stdio.h>
#include<string.h>
struct emp{ 
    char name[50], dept[50], post[50], email[50], phone[20];
    float salary;
    int age, id, day, month, year;
};
struct org{ 
    char name[50], address[100], type[50], email[50], phone[20], website[50];
    int founded, count, start;
};
void flushInput(){ 
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}
void printEmp(struct emp e){ 
    printf("\nEmployee ID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nDepartment: %s", e.dept);
    printf("\nPosition: %s", e.post);
    printf("\nEmail: %s", e.email);
    printf("\nPhone: %s", e.phone);
    printf("\nSalary: %.2f", e.salary);
    printf("\nAge: %d", e.age);
    printf("\nDate of Joining: %02d/%02d/%04d\n", e.day, e.month, e.year);
}
int main(){
    int n, total=0;
    do{
        printf("Enter the number of organisations: ");
        scanf("%d", &n);
        flushInput(); 
    }while(n<1);
    struct org o[n];
    for(int i=0; i<n; i++){
        printf("\nEnter details for Organisation %d:\n", i+1);
        printf("Name: ");
        fgets(o[i].name, sizeof(o[i].name), stdin);
        o[i].name[strcspn(o[i].name, "\n")] = 0;
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
        }while(o[i].count<1);
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
            flushInput();
            do{
                printf("Salary: ");
                scanf("%f", &t.salary);
                flushInput();
            }while(t.salary<0);
            e[idx] = t;  
        }
    }
    int choice;
    do{
        printf("\n1. Show all info\n2. Search Employee by id\n3. Statistics\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        flushInput();
        if(choice==1){
            for(int i=0; i<n; i++){
                printf("\nOrganisation: %s\n", o[i].name);
                printf("Address: %s\n", o[i].address);
                printf("Type: %s\n", o[i].type);
                printf("Email: %s\n", o[i].email);
                printf("Phone: %s\n", o[i].phone);
                printf("Website: %s\n", o[i].website);
                printf("Founded Year: %d\n", o[i].founded);
                for(int j=0; j<o[i].count; j++){
                    printf("\nEmployee %d:\n", j+1);
                    printEmp(e[o[i].start+j]);
                }
            }
        } else if(choice==2||choice==3){
            int c;
            for(int i=0; i<n; i++){
                printf("\n%d. %s\n", i+1, o[i].name);
            }
            do{
                printf("Select an organisation: ");
                scanf("%d", &c);
                flushInput();
            }while(c<1 || c>n);
            struct org selectedOrg = o[c-1];
            if(choice==2){
                int id, found=0;
                printf("Enter Employee ID: ");
                scanf("%d", &id);
                flushInput();
                for(int j=0; j<selectedOrg.count; j++){
                    if(e[selectedOrg.start+j].id==id){
                        printf("\nEmployee found:\n");
                        printEmp(e[selectedOrg.start+j]);
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("Employee not found.\n");
                }
            } else{
                float totalSalary=0, avgSalary=0;
                int minAge=e[selectedOrg.start].age, maxAge=e[selectedOrg.start].age;
                for(int j=0; j<selectedOrg.count; j++){
                    totalSalary+=e[selectedOrg.start+j].salary;
                    if(e[selectedOrg.start+j].age<minAge){
                        minAge=e[selectedOrg.start+j].age;
                    }
                    if(e[selectedOrg.start+j].age>maxAge){
                        maxAge=e[selectedOrg.start+j].age;
                    }
                }
                avgSalary=totalSalary/selectedOrg.count;
                printf("Total Salary: %.2f\n", totalSalary);
                printf("Average Salary: %.2f\n", avgSalary);
                printf("Minimum Age: %d\n", minAge);
                printf("Maximum Age: %d\n", maxAge);
            }
        } else if(choice!=4){
            printf("Invalid choice. Please try again.\n");
        }
    }while(choice!=4);
    return 0;
}