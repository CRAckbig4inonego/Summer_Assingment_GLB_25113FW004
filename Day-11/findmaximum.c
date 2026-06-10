#include<stdio.h>
int max(int a,int b);
int main (){
printf("Enter first number :");
int num1;
scanf("%d",&num1);
printf("Enter second number :");
int num2;
scanf("%d",&num2);
max(num1,num2);

    return 0;
}
int max(int a,int b){
    if (a>b)
    {
        printf("Maximum number is :%d",a);
    }
    else
    {
        printf("Maximum number is :%d",b);
    }
    
}