#include<stdio.h>
#include<string.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a, sizeof(a), stdin);
char b[100]={'\0'};
int i,j,bCount=0;

for (i = 0; a[i]!='\0'; i++) {
        int isDistinct = 1;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            b[bCount++] = a[i];
        }
    }
    printf("String of distinct characters: %s ", b);
    
return 0;}