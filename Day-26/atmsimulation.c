#include<stdio.h>
int main()
{
    int choice;
    float balance = 10000, amount;
    do
    {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        if(choice == 1)
        {
            printf("Current Balance = %.2f\n",balance);
        }
        else if(choice == 2)
        {
            printf("Enter deposit amount : ");
            scanf("%f",&amount);

            balance = balance + amount;

            printf("Updated Balance = %.2f\n",balance);
        }
        else if(choice == 3)
        {
            printf("Enter withdrawal amount : ");
            scanf("%f",&amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Withdrawal Successful\n");
                printf("Remaining Balance = %.2f\n",balance);
            }
            else
            {
                printf("Insufficient Balance\n");
            }
        }
        else if(choice == 4)
        {
            printf("Thank You!\n");
        }
        else
        {
            printf("Invalid Choice\n");
        }

    }while(choice != 4);

    return 0;
}