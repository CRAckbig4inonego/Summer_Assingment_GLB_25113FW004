#include <stdio.h>
int main()
{
    printf("Enter first number :");
    int firstNum;
    scanf("%d", &firstNum);
    printf("Enter second number :");
    int secondNum;
    scanf("%d", &secondNum);
    int temp;
    int a = firstNum;
    int b = secondNum;
    for (int i = 0; secondNum != 0; i++)
    {
        temp = secondNum;
        secondNum = firstNum % secondNum;
        firstNum = temp;
    }
     
    
    int lcm = (a * b) / firstNum;
    printf("%d", lcm);

    return 0;
}