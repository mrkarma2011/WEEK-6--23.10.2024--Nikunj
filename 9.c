#include<stdio.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
gets(a);
int isVowel=0;
printf("Vowels in the given string are:");
for (int i = 0; a[i]!='\0'; i++)
{
    if (a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u'||a[i] == 'A'||a[i] == 'E'||a[i] == 'I'||a[i] == 'O'||a[i] == 'U')
{
    isVowel=1;
    printf("%c ", a[i]);
    
}
}


    return 0;
}