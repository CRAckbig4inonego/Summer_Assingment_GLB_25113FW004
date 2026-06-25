#include<stdio.h>
int main (){
printf("Enter size of first array : ");
int n;
scanf("%d",&n);
printf("Enter size of second array : ");
int m;
scanf("%d",&m);
int arr[n],brr[m],crr[n+m];
printf("Enter first sorted array : ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter second sorted array : ");
for(int i=0;i<m;i++){
    scanf("%d",&brr[i]);
}
int i=0,j=0,k=0;
for(;i<n && j<m;){
    if(arr[i]<brr[j]){
        crr[k]=arr[i];
        i++;
    }
    else{
        crr[k]=brr[j];
        j++;
    }
    k++;
}

for(;i<n;i++,k++){
    crr[k]=arr[i];
}

for(;j<m;j++,k++){
    crr[k]=brr[j];
}

printf("Merged array :");
for(i=0;i<n+m;i++){
    printf("%d ",crr[i]);
}

return 0;
}