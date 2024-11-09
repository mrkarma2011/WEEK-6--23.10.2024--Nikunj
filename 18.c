#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input a string: ");
	gets(a);
	int i,j, len=0;
	for(i=0;a[i]!=0;i++)
	len++;
	for(i=0;i<len-1;i++)
	for(j=0; j<len -1 -i; j++)
	if(a[j]>a[j+1]){
		char t= a[j];
		a[j]= a[j+1];
		a[j+1]=t;
	}
	printf("sorted string in ascending order: ");
	puts(a);
}
