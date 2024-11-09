#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input a string: ");
	gets(a);
	int i,vow=0,cons=0,dig=0,spac=0;
	for(i=0; a[i]!='\0'; i++){
		if(a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u')
		vow++;
		else if (a[i]==' ')
		spac++;
		else if (a[i]<=57 && a[i]>=48)
		dig++;
		else
		cons++;
	}
	printf("no. of vowels: %d\nno.of consonants: %d\n no.of digits: %d\n no.of spaces: %d", vow,cons,dig,spac);
}
