#include<stdio.h>
int main(){
    char a[100]={'\0'};
    printf("input your string (uppercase): ");
    gets(a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        a[i]+= 32;
    }
    printf(" new string: %s", a);

}