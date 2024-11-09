#include<stdio.h>
int main(){
    char a[100],copy[100]={'\0'};
    int c=0;
    printf("input your string: ");
    gets(a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        copy[i]=a[i];
    }
    for (int i = 0; copy[i]!='\0'; i++)
    {
        printf("%c", copy[i]);
    }
    

}