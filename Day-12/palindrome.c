#include<stdio.h>
int palindrome(int a);
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
palindrome(num);
    return 0;
}
int palindrome(int a){
    int rem;
    int checkNum=a;
    int sum=0;
    for (int i = 0; a>0; i++)
    {
        rem=a%10;
        sum=sum*10+rem;
        a/=10;
    }
    if (checkNum==sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    
}