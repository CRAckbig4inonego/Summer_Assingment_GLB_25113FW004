#include<stdio.h>
int main (){
printf("Enter  number of row :");
int rows;
scanf("%d",&rows);
if (rows>=0)
{
    for (int i = 1; i <=rows; i++)
{
    for (int j = 1; j <=i; j++)
    {
        printf("%d",i);
    }
    printf("\n");
}
}
else
{
    printf("Opps you entered negative number !!");
}



    return 0;
}