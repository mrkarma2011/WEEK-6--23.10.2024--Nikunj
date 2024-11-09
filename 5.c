#include<stdio.h>

int main(){
    char a[100]={'\0'};
    int l=0;
printf("input a string: ");
gets(a);

for (int i = 0; a[i]!='\0'; i++)
    {
        l++;
    }

    for (int j = 0; j < l/2; j++)
            {
                char t= a[j];
                a[j]= a[l-j-1];
                a[l-j-1]=t;
            }
    printf("reversed string is: %s", a);
    return 0;
}