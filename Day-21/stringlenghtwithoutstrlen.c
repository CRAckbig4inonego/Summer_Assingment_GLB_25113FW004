#include<stdio.h>
int main (){
char str[100];
printf("Enter string : ");
fgets(str,sizeof(str),stdin);

int count=0;
for(int i=0;str[i]!='\0';i++){
    count++;
}
printf("Length of string = %d",count-1);

return 0;
}