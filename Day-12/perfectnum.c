#include<stdio.h>
int perfectNum(int a);
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
perfectNum(num);
return 0;

}
int perfectNum(int a){
    int sum=0;
    for (int i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
        
    }
    if (sum==a)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");
    }
    
    
}