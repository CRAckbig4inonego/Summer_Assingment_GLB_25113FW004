#include<stdio.h>
int main (){
printf("Enter number of element :");
int num;
scanf("%d",&num);
int arr[num];
int evenNum=0;
int oddNum=0;
for (int i = 0; i <num; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i <num; i++)
{
    if (arr[i]%2==0)
    {
        evenNum++;
    }
    else
    {
        oddNum++;
    }
    
}
printf("Even element is :%d",evenNum);
printf("\nOdd element is :%d",oddNum);

    return 0;
}