#include<stdio.h>
#include<string.h>
int main (){
printf("Enter number of names : ");
int n;
scanf("%d",&n);
char name[n][100],temp[100];
printf("Enter names :\n");
for(int i=0;i<n;i++){
    scanf("%s",name[i]);
}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(strcmp(name[i],name[j])>0){
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
        }
    }
}
printf("Names after sorting :\n");
for(int i=0;i<n;i++){
    printf("%s\n",name[i]);
}

return 0;
}