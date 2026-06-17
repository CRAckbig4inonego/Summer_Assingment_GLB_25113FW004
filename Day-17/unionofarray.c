#include<stdio.h>
int main(){
printf("Enter number of elements in first array :");
    int n1;
scanf("%d",&n1);
int a[n1];
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);

printf("Enter number of elements in second array :");
int n2;
scanf("%d",&n2);
int b[n2];
for(int i=0;i<n2;i++)
scanf("%d",&b[i]);

for(int i=0;i<n1;i++)
printf("%d ",a[i]);

for(int i=0;i<n2;i++){
    int found=0;
    for(int j=0;j<n1;j++){
    if(b[i]==a[j]){
    found=1;
    break;
    }
}
if(!found)
printf("%d ",b[i]);
}

return 0;
}