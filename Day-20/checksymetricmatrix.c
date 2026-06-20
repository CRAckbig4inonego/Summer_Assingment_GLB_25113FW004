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
int brr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        brr[i][j]=arr[j][i];
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
int flag=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[i][j]!=brr[j][i])
        {
            flag=1;
        }
        
    }
    
}
if (flag=1)
{
    printf("Symmetric matrix");
}
else
{
    printf("Not symmetric");
}


    return 0;
}