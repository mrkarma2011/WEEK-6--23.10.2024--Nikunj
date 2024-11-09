#include<stdio.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
gets(a);
char k; 
printf("enter char to find:"); scanf("%c", &k);
for (int i = 0; a[i]!='\0'; i++)
{
    if(a[i]==k)
    {   
        printf("char found at position %d", i+1); 
        break;
    }
}

    return 0;
}