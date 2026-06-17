#include<stdio.h>
int main(){
printf("Enter number of elements in first array :");
    int n1;
scanf("%d",&n1);
int a[n1];
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("Enter number of elements in secon array :");
int n2;
scanf("%d",&n2);
int b[n2];
for(int i=0;i<n2;i++)
scanf("%d",&b[i]);

printf("Common elements: ");

for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(a[i]==b[j]){
        printf("%d ",a[i]);
        break;
        }
    }
}

return 0;
}