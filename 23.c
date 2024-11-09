#include<stdio.h>
int main(){
	char a[100]={'\0'}, b[100]={'\0'};
	printf("input a string: ");
	gets(a);
	
    int i,j,bCount=0,l=0;
	
    for (int i = 0; a[i]!='\0'; i++)
    {
        l++;
    }
    for (i = 0;i<l; i++) {
        int isDistinct = 1;
        for (j = 0; j < l && j!=i; j++) {
            if (a[i] == a[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            b[bCount++] = a[i];
        }
    }
    b[bCount] = '\0';
    printf("Distinct elements: %s ", b);

    
}
