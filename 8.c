#include<stdio.h>

int main(){
    char a[100]={'\0'}, b[100]={'\0'};
    int l=0, isEqual=1;
printf("input a string: ");
gets(a);

for (int i = 0; a[i]!='\0'; i++)
    {
        l++;
        b[i] = a[i];
    }
    for (int j = 0; j < l/2; j++)
            {
                char t= a[j];
                a[j]= a[l-j-1];
                a[l-j-1]=t;
            }

            for (int i = 0; a[i]!='\0' || b[i]!='\0'; i++)
{
    if (a[i]!=b[i])
    {
        isEqual=0;
        break;
    }
}

if(isEqual)
 printf("Given string is plaindrome");
else  
 printf("Given string is NOT a palindrome");
            
}