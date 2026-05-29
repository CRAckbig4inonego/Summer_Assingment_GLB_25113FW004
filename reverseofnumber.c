#include <stdio.h>
int main()
{
    printf("Enter number :");
    int num;
    scanf("%d", &num);
    int rem;
    int rev = 0;
    for (int i = 0; num > 0; i++)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reverse number is :%d", rev);

    return 0;
}