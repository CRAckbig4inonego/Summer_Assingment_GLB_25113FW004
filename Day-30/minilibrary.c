#include <stdio.h>
int main() {
    int id[100], n = 0, choice, search, i;
    char title[100][50];
    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch (choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d",&id[n]);

                printf("Enter Book Title: ");
                scanf("%s",title[n]);
                n++;
                printf("Book Added Successfully.\n");
                break;

            case 2:
                if (n==0) {
                    printf("No Books Available.\n");
                } else {
                    printf("\nBook ID\tTitle\n");
                    for (i = 0; i<n; i++)
                        printf("%d\t%s\n", id[i], title[i]);
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d",&search);

                for (i = 0; i<n; i++) {
                    if (id[i] == search) {
                        printf("Book Found\n");
                        printf("ID : %d\n", id[i]);
                        printf("Title : %s\n", title[i]);
                        break;
                    }
                }

                if (i==n)
                    printf("Book Not Found.\n");
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