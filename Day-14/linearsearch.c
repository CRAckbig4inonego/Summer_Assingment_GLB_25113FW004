#include<stdio.h>
int main (){
printf("Enter number of element :");
int num;
scanf("%d",&num);
printf("Enter target element :");
int target;
scanf("%d",&target);
int arr[num];
for (int i = 0; i <num; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i <num; i++)
{
    if (arr[i]==target)
    {
        printf("Target element is found");
        return 0;
    }
    
}
    printf("Target element is not found");
    

    return 0;
}