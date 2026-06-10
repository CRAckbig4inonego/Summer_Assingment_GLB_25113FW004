#include<stdio.h>
int prime(int a);
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
prime(num);
    return 0;
}
int prime(int a){
    for (int i = 2; i<a; i++)
    {
        if (a%i==0)
        {
            printf("Not prime number");
            return 0;
        }        
    }
        printf("Prime number");
    
}