#include<stdio.h>
#include<string.h>
int main(){
    char a[1000]={'\0'};
    printf("Input a string: ");
    fgets(a,sizeof(a), stdin);


    int alpha[26]={0};
    for(int i=0; a[i]!='\0'; i++)
    alpha[a[i]-'a']++;

for(int j=0; j<26;j++)
printf("%d " ,alpha[j]);
    printf("\n");

    int isSuper=1;
    for(int i=0; alpha[i]!=0; i++ )
    {
        if(alpha[i]!=i+1)
        {isSuper=0;
        break;}
    }

    if(!isSuper)
    printf("No");
    else
    printf("Yes");
}