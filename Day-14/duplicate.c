#include<stdio.h>
int main (){
printf("Enter number of elements :");
int num;
scanf("%d",&num);
int arr[num];
for(int i=0;i<num;i++){
    scanf("%d",&arr[i]);
}
for (int i = 0; i < num-1; i++)
{
    if(arr[i]==arr[i+1]){
        printf("Duplicate element found");
        return 0;
    }
}
printf("Duplicate element not found");
    return 0;
}