#include<stdio.h>
void fibo(int n);
int main (){
printf("Enter how many terms you want to print :");
int num;
scanf("%d",&num);
fibo(num);
return 0;
}
void fibo(int n){
    int a=0;
    int b=1;
    int c;
    for (int i = 0; i <=n; i++)
    {
        if (i==0)
        {
            printf("%d",a);
        }
        else if (i==1)
        {
            printf(" %d",b);
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
            printf(" %d",c);
        }
        
    }
    
}