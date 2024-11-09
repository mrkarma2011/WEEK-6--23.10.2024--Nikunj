#include<stdio.h>
int main(){
char a[100]={'\0'}, b[100]={'\0'};
int isEqual=1;
printf("input string 1: ");
gets(a);
printf("input string 2: ");
gets(b);
for (int i = 0; a[i]!='\0' || b[i]!='\0'; i++)
{
    if (a[i]!=b[i])
    {
        isEqual=0;
        break;
    }
}

if(isEqual)
 printf("both strings are equal");
else  
 printf("both strings are unequal");

    return 0;
}