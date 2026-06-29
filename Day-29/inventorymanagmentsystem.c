#include <stdio.h>
int main() {
    int id[100], qty[100];
    float price[100];
    int n = 0, choice, i;
    do {
        printf("\n===== INVENTORY MANAGEMENT =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d",&id[n]);

                printf("Enter Quantity: ");
                scanf("%d",&qty[n]);

                printf("Enter Price: ");
                scanf("%f",&price[n]);
                n++;
                printf("Product Added Successfully.\n");
                break;

            case 2:
                if (n==0) {
                    printf("No Products Available.\n");
                } else {
                    printf("\nID\tQuantity\tPrice\n");
                    for (i = 0;i<n; i++) {
                        printf("%d\t%d\t\t%.2f\n",
                               id[i], qty[i], price[i]);
                    }
                }
                break;

            case 3: {
                int pid, found = 0;

                printf("Enter Product ID to Search: ");
                scanf("%d",&pid);

                for (i = 0;i<n;i++) {
                    if (id[i] == pid) {
                        printf("Product Found\n");
                        printf("ID = %d\n", id[i]);
                        printf("Quantity = %d\n", qty[i]);
                        printf("Price = %.2f\n", price[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Product Not Found.\n");

                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while (choice!=4);
    return 0;
}