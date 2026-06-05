#include<stdio.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
for (int i = 2; i <=num; i++)
{
    while (num%i==0)
    {
        printf(" %d",i);
        num/=i;
    }   
}
    return 0;
}