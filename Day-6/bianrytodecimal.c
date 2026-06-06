#include<stdio.h>
#include<math.h>
int main (){
printf("Enter binary number :");
int num;
scanf("%d",&num);
int rem;
int sum=0;
for (int i = 0;num>0; i++)
{
    rem=num%10;
    sum+=rem*pow(2,i);
    num/=10;
}
printf("%d",sum);
    return 0;
}