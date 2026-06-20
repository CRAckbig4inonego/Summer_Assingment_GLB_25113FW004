#include<stdio.h>
int main (){
printf("Enter order of matrix :");
int n;
scanf("%d",&n);
printf("Enter first matrix\n");
int arr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
printf("Enter second matrix\n");
int brr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&brr[i][j]);
    }
    
}
int crr[n][n];
for (int i = 0; i < n; i++)
{   
for (int j = 0; j < n; j++)
{   int sum=0;
        for (int k = 0; k < n; k++)
        {
            sum+=arr[i][k]*brr[k][j];    
        }
        
        crr[i][j]=sum;
    }
}
printf("Multiplication of matrix\n");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d ",crr[i][j]);
    }
    printf("\n");
}
    return 0;
}