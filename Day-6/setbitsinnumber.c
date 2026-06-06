#include<stdio.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
int count=0;
int rem[count];
int setbits=0;
for (int i = 0; num>0; i++)
{
    rem[i]=num%2;
    num/=2;
    count++;
}
for (int i = 0; i <count; i++)
{
    if (rem[i]==1)
    {
      setbits++;  
    }
    
}
printf("%d",setbits);

    return 0;
}