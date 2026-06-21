#include<stdio.h>
int main (){
char str[100];
printf("Enter string : ");
fgets(str,sizeof(str),stdin);

int vowel=0,consonant=0;

for(int i=0;str[i]!='\0';i++){
    if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
           str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
}

printf("Vowels = %d\n",vowel);
printf("Consonants = %d",consonant);

return 0;
}