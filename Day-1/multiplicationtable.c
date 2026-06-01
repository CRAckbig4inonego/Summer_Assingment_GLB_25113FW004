#include <stdio.h>
int main()
{
    printf("Enter number of whom table you want :");
    int num;
    scanf("%d", &num);
    printf("Enter how many terms you want :");
    int num1;
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        int sum = num;
        sum *= i;
        printf("%d\n", sum);
    }

    return 0;
}