#include<stdio.h>
int main (){
printf("Enter number of row :");
int row;
scanf("%d",&row);

if (row>=0)
{
    for (int i = 1; i <=row; i++)
{
    for (int j = 1; j <=i; j++)
    {
        printf("%c",(char)(j+64));
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