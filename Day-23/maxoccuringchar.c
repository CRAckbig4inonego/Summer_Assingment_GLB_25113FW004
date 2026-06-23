#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("Enter string : ");
gets(str);
char maxchar;
int maxcount=0;
for(int i=0;str[i]!='\0';i++){
    int count=0;

    for(int j=0;str[j]!='\0';j++){
        if(str[i]==str[j]){
            count++;
        }
    }

    if(count>maxcount){
        maxcount=count;
        maxchar=str[i];
    }
}
printf("Maximum occurring character :%c",maxchar);
printf("\nFrequency :%d",maxcount);

return 0;
}