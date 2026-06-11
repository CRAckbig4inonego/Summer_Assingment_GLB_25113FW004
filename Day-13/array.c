#include<stdio.h>
int main (){
printf("Enter number of terms :");
int num;
scanf("%d",&num);
int arr[num];
for (int i = 0; i <num; i++)
{
    printf("Enter %d element :",i+1);
    scanf("%d",&arr[i]);
}
for (int i = 0; i <num; i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}