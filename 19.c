#include<stdio.h>
int main(){
	char a[100]={'\0'};
	printf("input a string: ");
	gets(a);
	int i,round=0,square=0,curly=0,angular=0,roundR=0,squareR=0,curlyR=0,angularR=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='(') round++;
else if(a[i]=='[') square++;
else if(a[i]=='{') curly++;
else if(a[i]=='<') angular++;
else if(a[i]==')') roundR++;
else if(a[i]==']') squareR++;
else if(a[i]=='}') curlyR++;
else if(a[i]=='>') angularR++;
}

if((round==roundR)&&(square==squareR)&&(curly==curlyR)&&(angular==angularR))
printf("string is valid");
else 
printf("string is invalid");
}
