#include<stdio.h>
int main(){
printf("Enter number of elements of first array :");
int n1;
scanf("%d",&n1);
int a[n1];
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("Enter number of elements of second array :");
int n2;
scanf("%d",&n2);
int b[n2];

for(int i=0;i<n2;i++)
    scanf("%d",&b[i]);

    int c[n1+n2];

for(int i=0;i<n1;i++)
    c[i]=a[i];

for(int i=0;i<n2;i++)
    c[n1+i]=b[i];

for(int i=0;i<n1+n2;i++)
printf("%d ",c[i]);

return 0;
}