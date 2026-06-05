#include<stdio.h>
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
int sum=0;
if (num<0)
{
    printf("Opps you entered wrong input !!");
}
else
{

    for(int i=1;i<num;i++){
    if (num%i==0)
    {
        sum+=i;
        
    }
    
}
if (sum==num)
{
    printf("Perfect number");
}
else
{
    printf("Not perfect number");
}

}
    return 0;
}