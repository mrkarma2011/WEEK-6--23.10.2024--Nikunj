#include<stdio.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
gets(a);
char k;
int p,l,i;
printf("enter char to insert ");
scanf("%c", &k);
printf("enter position: ");
scanf("%d", &p);

for (i = 0; a[i]!='\0'; i++)
    {
        l++;
    }
    
    a[l]= a[l-1];
for ( i = p-1; i<=l-p ; i++)
{
    a[i+1]=a[i];
}
	
	a[p-1]= k;

printf("new string is: %s", a);
    return 0;
}
