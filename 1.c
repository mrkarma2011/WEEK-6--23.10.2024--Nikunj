#include<stdio.h>
int main(){
    char a[100];
    int c=0;
    printf("input your string: ");
    gets(a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        c++;
    }
    printf("string length: %d ", c);

}