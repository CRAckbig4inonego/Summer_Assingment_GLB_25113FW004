#include<stdio.h>
int sum(int a,int b);
int main (){
printf("Enter first number :");
int num1;
scanf("%d",&num1);
printf("Enter second number :");
int num2;
scanf("%d",&num2);
printf("Sum is :%d",sum(num1,num2));
    return 0;
}
int sum(int a,int b){
    return (a+b);
}