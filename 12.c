#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input string: ");
	gets(a);
	fflush(stdin);
	int most=0, least=0,i,j,l=0;
	int b[26]={0};
	//length
	for(i=0; a[i]!=0; i++)
	l++;
	//alpha array
	for(i=0; i<l; i++)
	{
		b[a[i]-'a']++;
	}
	//max frequency
int x = b[0];
for(i=0; i<26; i++){
	if(x<b[i]&& b[i]!=0)
	{
	x=b[i]; most=i;}
}
//min freq
int y = b[0];
for(i=0; i<26; i++){
	if(y>b[i]&& b[i]>0)
	{
	y=b[i]; 
	least=i;
	}
}
for(i=0; i<26;i++)
printf("%d ", b[i]);
printf("%d\n", least);
printf("%c is most repeated\n",most + 97 );
printf("%c is least repeated",least + 97 );
}
