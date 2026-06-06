#include<stdio.h>
int main (){
printf("Enter base number :");
int num;
scanf("%d",&num);
printf("Enter power :");
int pow;
scanf("%d",&pow);
int sum=1;
for (int i = 1; i <=pow; i++)
{
    sum=sum*num;
}
printf("%d",sum);
    return 0;
}