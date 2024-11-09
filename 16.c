#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input a string: ");
	gets(a);
	char b[100]={'\0'};
	int i, bCount=0;
	for(i=0;a[i]!='\0';i++)
	if(!(a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u'))
	b[bCount++]=a[i];
	printf("new string is %s", b);
}
