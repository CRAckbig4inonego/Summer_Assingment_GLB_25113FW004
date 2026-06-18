#include<stdio.h>
int main(){
printf("Enter number of elements :");
int n,key,low=0,mid,found=0;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

scanf("%d",&key);

int high=n-1;

while(low<=high){
mid=(low+high)/2;

if(arr[mid]==key){
printf("Element found at index %d",mid);
found=1;
break;
}
else if(arr[mid]<key)
low=mid+1;
else
high=mid-1;
}

if(!found)
printf("Element not found");

return 0;
}