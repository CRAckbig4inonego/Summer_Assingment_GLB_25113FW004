#include<stdio.h>
int main (){
printf("Enter number of element :");
int num;
scanf("%d",&num);
int arr[num];
int smallest=arr[0];
int largest=0;
for (int i = 0; i <num; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i < num; i++)
{
    if (arr[i]>largest)
    {
        largest=arr[i];
    }
    
}
for (int i = 0; i < num; i++)
{
    if (arr[i]<smallest)
    {
        smallest=arr[i];
    }
    
}
printf("Smallest element is :%d",smallest);
printf("\nLargest element is :%d",largest);
    return 0;
}