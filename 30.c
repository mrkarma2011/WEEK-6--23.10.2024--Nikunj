#include<stdio.h>
#include<string.h>
//code to sort words in a string
int main(){
char a[1000]={'\0'};
printf("input a string: ");
fgets(a, sizeof(a), stdin);
char words[1000][100];
int wordCount=0;
int i=0, j;
while(a[i]!='\0')
{      if(a[i]!=' ' && a[i]!='\n')
    { 
        j=0;
        while(a[i]!=' ' && a[i]!='\n' && a[i]!='\0')
        words[wordCount][j++]=a[i++];

        words[wordCount][j]='\0';
        wordCount++;
    }
    else
    i++;

}

int length=0;
for(i=0; words[wordCount-1][i]!='\0'; i++){
    length++;
}
printf("Length of last word is: %d", length);

return 0;}