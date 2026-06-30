#include <stdio.h>
#define MAX 100
int roll[MAX], marks[MAX], n = 0;
char name[MAX][50];
void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);
    printf("Enter Name: ");
    scanf("%s", name[n]);
    printf("Enter Marks: ");
    scanf("%d", &marks[n]);
    n++;
    printf("Student Added Successfully.\n");
}
void displayStudents() {
    int i;
    if (n==0) {
        printf("No Student Records.\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");

    for (i=0;i<n;i++) {
        printf("%d\t%s\t%d\n",
               roll[i], name[i], marks[i]);
    }
}
void searchStudent() {
    int search, i;
   printf("Enter Roll Number: ");
    scanf("%d",&search);

    for (i = 0;i<n;i++) {
        if (roll[i] == search) {
            printf("\nStudent Found\n");
            printf("Roll : %d\n", roll[i]);
            printf("Name : %s\n", name[i]);
            printf("Marks : %d\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice!=4);
    return 0;
}