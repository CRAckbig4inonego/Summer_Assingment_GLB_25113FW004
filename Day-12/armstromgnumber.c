#include<stdio.h>
#include<math.h>
int armstrong(int a);
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
armstrong(num);

    return 0;
}
int armstrong(int a){
    int checkNum=a;
    int rem;
    int sum=0;
    int count=0;
    int checknum=a;
    for (int i = 0; a>0; i++)
    {
        a/=10;
        count++;
    }
    for (int i = 0; checknum>0; i++)
    {
        rem=checknum%10;
        sum+=pow(rem,count)+.5;
        checknum/=10;
    }
    if (sum==checkNum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not armstrong");
    }
    
}