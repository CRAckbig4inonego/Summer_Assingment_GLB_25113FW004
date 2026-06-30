#include <stdio.h>
int main() {
    int id[100], salary[100], n = 0;
    char name[100][50];
    int choice, i, search;
    do {
        printf("\n===== EMPLOYEE MANAGEMENT =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch (choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d",&id[n]);

                printf("Enter Employee Name: ");
                scanf("%s",name[n]);

                printf("Enter Salary: ");
                scanf("%d",&salary[n]);
                n++;
                printf("Employee Added Successfully.\n");
                break;

            case 2:
                if (n==0) {
                    printf("No Employee Records.\n");
                } else {
                    printf("\nID\tName\tSalary\n");
                    for (i = 0; i<n; i++) {
                        printf("%d\t%s\t%d\n",
                               id[i], name[i], salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d",&search);

                for (i = 0; i<n; i++) {
                    if (id[i] == search) {
                        printf("Employee Found\n");
                        printf("ID : %d\n", id[i]);
                        printf("Name : %s\n", name[i]);
                        printf("Salary : %d\n", salary[i]);
                        break;
                    }
                }

                if (i==n)
                    printf("Employee Not Found.\n");

                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice!= 4);

    return 0;
}