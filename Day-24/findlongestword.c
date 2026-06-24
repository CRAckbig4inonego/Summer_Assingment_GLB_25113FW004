#include<stdio.h>
#include<string.h>
int main(){
char str[200],longest[100];
printf("Enter sentence: ");
fgets(str,sizeof(str),stdin);
int max=0,len=0,j=0;
char word[100];
for(int i=0;;i++){
if(str[i]!=' '&&str[i]!='\0'&&str[i]!='\n'){
word[j++]=str[i];
}
else{
word[j]='\0';
len=strlen(word);
if(len>max){
max=len;
strcpy(longest,word);
}
j=0;
if(str[i]=='\0')
break;
}
}
printf("Longest word:%s",longest);
return 0;
}