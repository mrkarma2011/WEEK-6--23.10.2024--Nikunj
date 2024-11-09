#include<stdio.h>
#include<string.h>
//code to sort words in a string and print largest and smallest of them

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


for ( i = 0; i < wordCount - 1; i++) {
        for ( j = 0; j < wordCount - i - 1; j++) 
		{
        if (strcmp(words[j], words[j + 1]) > 0) {
                char t[100];
                strcpy(t, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], t);
            }
        }
    }

printf("Smallest word: %s\n", words[0]);
printf("Largest word: %s", words[wordCount-1]);

    return 0;
}