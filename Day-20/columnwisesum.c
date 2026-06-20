#include<stdio.h>
int main (){
printf("Enter row of matrix :");
int row;
scanf("%d",&row);
printf("Enter column of matrix :");
int column;
scanf("%d",&column);
printf("Enter matrix\n");
int arr[row][column];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
for (int j = 0; j < column; j++)
{   int sum=0;
    for (int i = 0; i < row; i++)
    {
        sum+=arr[i][j];
    }
    printf("%d column sum is : %d",j+1,sum);
    printf("\n");
    
}

    return 0;
}