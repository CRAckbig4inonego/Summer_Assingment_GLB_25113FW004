#include<stdio.h>
int main (){
printf("Enter number of terms :");
int num;
scanf("%d",&num);
int arr[num];
for (int i = 0; i < num; i++)
{
    scanf("%d",&arr[i]);
}
int sum=0;
for (int i = 0; i < num; i++)
{
    sum+=arr[i];
}
printf("Sum of array is :%d\n",sum);
int avg=sum/num;
printf("Average of array is :%d",avg);
return 0;
}