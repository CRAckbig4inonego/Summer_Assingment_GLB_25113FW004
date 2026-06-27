#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee emp[5];
    int i, n;

    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(i = 0; i <n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d",&emp[i].id);

        printf("Name: ");
        scanf("%s",emp[i].name);

        printf("Salary: ");
        scanf("%f",&emp[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i <n; i++)
    {
        printf("\nEmployee ID : %d", emp[i].id);
        printf("\nName        : %s", emp[i].name);
        printf("\nSalary      : %.2f\n", emp[i].salary);
    }
    return 0;
}