#include<stdio.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
int temp=num;
int sum=0;
for (int i = 0; num>0; i++)
{
    int rem;
    rem=num%10;
    num=num/10;
    int fact=1;
    
    
    for (int i = rem; i>0; i--)
    {
        fact*=i;
        
    }
    sum+=fact;
    
}
if (sum==temp)
{
    printf("Perfect number");
}
else
{
    printf("Not perfect number");
}


    return 0;
}