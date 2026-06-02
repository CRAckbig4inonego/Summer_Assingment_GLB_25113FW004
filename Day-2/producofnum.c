#include <stdio.h>
int main()
{
    printf("Enter number :");
    int num;
    scanf("%d", &num);
    int pro = 1;
    int rem;
    for (int i = 0; num > 0; i++)
    {
        rem = num % 10;
        pro *= rem;
        num /= 10;
    }

    printf("Product of digits is :%d", pro);

    return 0;
}