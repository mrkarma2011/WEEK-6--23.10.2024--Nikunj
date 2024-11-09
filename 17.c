#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input a string: ");
	gets(a);
	int spac=0,i;
	for(i=0; a[i]!='\0'; i++)
	if (a[i]==' ')
		spac++;
		printf("no. of words : %d", spac+1);
}
