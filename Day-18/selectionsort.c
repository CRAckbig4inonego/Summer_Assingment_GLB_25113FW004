#include<stdio.h>
int main(){
printf("Enter number of elements :");
int n,min,temp;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

for(int i=0;i<n-1;i++){
min=i;
for(int j=i+1;j<n;j++){
if(arr[j]<arr[min])
min=j;
}
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}

for(int i=0;i<n;i++)
printf("%d ",arr[i]);

return 0;
}