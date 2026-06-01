#include <stdio.h>
int main()
{
    printf("Enter number :");
    int num;
    scanf("%d", &num);
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }
    printf("%d", fact);
    return 0;
}