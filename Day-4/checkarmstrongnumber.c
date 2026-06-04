#include<stdio.h>
#include<math.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
int check=num;
int check2=check;
int count=0;
int rem=0;
for (int i = 0; num>0; i++)
{
    rem=num%10;
    num/=10;
    count++;
}
printf("%d\n",count);
int rem2=0;
int sum=0;
for (int i = 0;check>0; i++)
{
    rem2=check%10;
    sum=sum+pow(rem2,count)+.5;
    check/=10;
}
printf("%d\n",sum);
if (check2==sum)
{
    printf("Armstrong number");
}
else
{
    printf("Not armstrong number");
}


    return 0;
}