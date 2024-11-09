#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input a string: ");
	gets(a);
	int i,c=0;
	for(i=0;a[i]!='\0';i++)
	if((a[i]==' '||a[i]=='t') && (a[i+1]=='t'||a[i+1]=='h') && (a[i+2]=='h'|| a[i+2]=='e')&& (a[i+3]=='e'|| a[i+3]==' ')&&(a[i+4]==' '|| a[i+4]=='\0'))
	c++;
	printf("'the' is repeated %d times", c);
}
