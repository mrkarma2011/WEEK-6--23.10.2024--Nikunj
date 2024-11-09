#include<stdio.h>
#include<string.h>
int main(){
char a[100]={'\0'}, b[100]={'\0'};
printf("Input source string : ");
fgets(a,sizeof(a), stdin);
printf("Input desired string : ");
fgets(b,sizeof(b), stdin);

a[strcspn(a, "\n")] = 0;
b[strcspn(b, "\n")] = 0;

int t1[26]={0}, t2[26]={0},count1=0,count2=0,l1=0,l2=0,i=0,j=0;
for ( i = 0; a[i]!='\0'; i++)
    l1++;
for(i=0; b[i]!='\0';i++)
    l2++;

for (i = 0; i<l1 ; i++)
    t1[a[i] - 'a']++;
for(i=0;  i<l2 ; i++)
    t2[b[i] - 'a']++;
        

int isPossible=1;
for ( i = 0; i < 26; i++)
{
    if(t1[i]<t2[i])
    {
        isPossible=0;
        break;
    }
}
if(isPossible)
printf("Yes");
else
printf("No");


    return 0;
}