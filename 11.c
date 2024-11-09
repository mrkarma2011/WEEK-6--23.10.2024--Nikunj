#include<stdio.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a, sizeof(a), stdin);
a[0]= a[0]-32;
for (int i = 0; a[i]!='\0'; i++)
{
    if (a[i]==' '&& a[i+1]>=97 && a[i+1]<=122)
    {
        a[i+1] = a[i+1] - 32;
    }
}

printf("new string: %s", a);
    return 0;
}