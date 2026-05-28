#include <stdio.h>
int main()
{
    printf("Enter number till which you want the sum :");
    int num;
    scanf("%d", &num);
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum of n terms is : %d", sum);
    return 0;
}