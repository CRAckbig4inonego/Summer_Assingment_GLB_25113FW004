#include<stdio.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
int large=1;
for (int i = 2; i <=num; i++)
{
    while (num%i==0)
    {
        large=i;
        num/=i;
    }
    
}
printf("%d",large);

    return 0;
}