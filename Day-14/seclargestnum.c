#include<stdio.h>
#include<limits.h>
int main (){
printf("Enter number of element :");
int num;
scanf("%d",&num);
int arr[num];
int largest=INT_MIN;
for (int i = 0; i < num; i++)
{
    scanf("%d",&arr[i]);
}

for (int i = 0; i <num; i++)
{
    if (arr[i]>largest)
    {
        largest=arr[i];
    }
    
}
int seclargest=INT_MIN;
for (int i = 0; i <num; i++)
{
    if (largest!=arr[i]&&seclargest<arr[i])
    {
        seclargest=arr[i];
    }
    
}
printf("%d",seclargest);

    return 0;
}