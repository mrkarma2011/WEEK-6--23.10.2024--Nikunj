#include<stdio.h>
#include<string.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a, sizeof(a), stdin);

a[strcspn(a, "\n")] = '\0';

int l= strlen(a);
for(int i=0; i<l; i++)
printf("%c\n", a[i]);

for (int len = 2; len <= l; len++)
        for (int i = 0; i <= l - len; i++) 
        { 
            for (int j = 0; j < len; j++) 
                printf("%c", a[i + j]);
            
            printf("\n");
        }
    
    return 0;
}