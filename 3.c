#include<stdio.h>
int main(){
    char a[100]={'\0'}, b[100]={'\0'};
    printf("input your string 1: ");
    gets(a); printf("input string 2: "); gets(b);

    int l1=0 , l2=0;
    for (int i = 0; a[i]!='\0'; i++)
        l1++;
    for(int i =0; a[i]!='\0'; i++)
        l2++;
    
    for (int i = l1; i < l1+l2; i++)
    {
        a[i]= b[i-l1];
    }
    printf("new string is: %s", a);

}