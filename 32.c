#include<stdio.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a,sizeof(a), stdin);

char c;
int t;
printf("Enter charcter to check: ");
scanf("%c",&c);
int isPresent=0;
for(int i=0;  a[i]!='\0'; i++)
if(a[i]== c){
    isPresent=1;
    t=i;
    break;
}
if(isPresent)
printf("%c is present at index %d", c,t);
else
printf("Character not found");
    return 0;
}