#include<stdio.h>
#include<string.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a,sizeof(a),stdin);
int l=0;

a[strcspn(a, "\n")] = 0;
for (int i = 0; a[i]!='\0'; i++)
l++;

int isAlt=1;
if(l%2==0)
for(int i = 0; i<l;i +=2)
{
 if(a[i]!=a[0] || a[i+1]!=a[1])
 {
    isAlt=0;
    break;
 }
}
else
for(int i = 0; i<l-1;i +=2)
{
 if(a[i]!=a[0] || a[i+1]!=a[1] || a[l-1]!=a[0])
 {
    isAlt=0;
    break;
 }
}

if(isAlt)
printf("YES");
else
printf("NO");

    return 0;
}