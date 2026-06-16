#include<stdio.h>
int main(){
int n,sum=0;
scanf("%d",&n);
int arr[n-1];
for(int i=0;i<n-1;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
printf("Missing Number :%d",n*(n+1)/2-sum);
    return 0;
}