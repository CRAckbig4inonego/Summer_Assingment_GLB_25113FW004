#include<stdio.h>
int main (){
printf("Enter number of rows and columns :");
int n;
scanf("%d",&n);
int arr[n][n];
printf("Enter element of first matrix :");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
printf("Enter element of second matrix :");
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
    {
        crr[i][j]=arr[i][j]+brr[i][j];
    }
    
}

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