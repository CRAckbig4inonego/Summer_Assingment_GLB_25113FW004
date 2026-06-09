#include<stdio.h>
int main (){
printf("Enter number of rows :");
int rows;
scanf("%d",&rows);
for (int i = 1; i <=rows; i++)
{
    for (int j = i; j<=rows; j++)
    {
        printf("*");
    }
    printf("\n");
}


    return 0;
}