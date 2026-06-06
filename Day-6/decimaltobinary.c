#include<stdio.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
int count=0;
int rem[count];
for (int i = 0;num>0; i++)
{
    rem[i]=num%2;
    num/=2;
    count++;
}
for (int i = count-1; i>=0; i--)
{
    printf(" %d",rem[i]);
}
   return  0;
}