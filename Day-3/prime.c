#include<stdio.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);

for (int i = 2; i <num; i++)
{
    if (num%i==0)
    {
        printf("Not prime number");
        return 0;
    }
    
}
printf("Prime number");

    return 0;
}