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
for (int i = 0; i < row; i++)
{   int sum=0;
    for (int j = 0; j < column; j++)
    {
        sum+=arr[i][j];
    }
    printf("%d row sum is : %d",i+1,sum);
    printf("\n");
    
}

    return 0;
}