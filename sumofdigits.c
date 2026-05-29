#include<stdio.h>
int main (){
    printf("Enter number :");
    int num;
    scanf("%d",&num);
    int rem;
    int sum=0;
    for(int i=0;num>0;i++){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
printf("Sum of digits is %d",sum);

    return 0;
}