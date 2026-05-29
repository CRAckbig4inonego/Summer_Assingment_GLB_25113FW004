#include <stdio.h>
int main()
{
    printf("Enter number :");
    int num;
    scanf("%d", &num);
    int rev = 0;
    int chechknum = num;
    int rem;
    for (int i = 0; num > 0; i++)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (rev == chechknum)
    {
        printf("Palimdrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}