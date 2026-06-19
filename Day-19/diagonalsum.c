#include<stdio.h>
int main (){
printf("Enter number of rows and columns :");
int n;
scanf("%d",&n);
int arr[n][n];
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
int sum=0;
for (int i = 0; i < n; i++)
{
    for (int j= 0;  j<n ; j++)
    {
        if (i==j)
        {
            sum+=arr[i][j];
        }
        
    }
    
}
printf("%d",sum);

    return 0;
}