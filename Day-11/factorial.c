#include<stdio.h>
int fact(int a);
int main (){
printf("Enter number :");
int num;
scanf("%d",&num);
printf("%d",fact(num));

    return 0;
}
int fact(int a){
    int factorial=1;
    for ( int i = a; i>0; i--)
    {
        factorial=factorial*i;
    }
    return factorial;
}