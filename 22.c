#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input a string: ");
	gets(a);
	int i;
	for(i=0; a[i]!='\0'; i++)
	if (a[i]<=90 && a[i]>=65){
		printf("%c is the first uppercase letter", a[i]);
		break;
	}
}
