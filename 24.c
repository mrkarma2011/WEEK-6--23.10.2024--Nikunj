#include<stdio.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
gets(a);

int alpha[26]={0};
for (int i = 0; i < 26; i++)
{
    if (a[i] >= 'a' && a[i] <= 'z')
    {
        alpha[a[i] - 'a']++;
    }
    
}

for(int i=0; i<26 ; i++)
if(alpha[i]!=0)
printf("%c occurs %d times \n", i+'a', alpha[i]);
    return 0;
}