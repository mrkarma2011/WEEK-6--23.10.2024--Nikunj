#include<stdio.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a,sizeof(a),stdin);
int i,j;
int found=0;
    for (i = 0; a[i]!='\0'; i++) {
		int isDistinct = 1;
        for (j = 0; a[j]!='\0'; j++) {
            if (i!=j && a[i] == a[j]) {
            	isDistinct=0;
                break;
            } 
        }
        if (isDistinct)
            {
                printf("%c", a[i]);
                found=1;
                break;
            } 
    }
 if(!found)
printf("No distinct elements");

    return 0;
}