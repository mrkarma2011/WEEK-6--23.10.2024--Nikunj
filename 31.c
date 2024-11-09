#include<stdio.h>
#include<string.h>
int main(){
char a[100]={'\0'};
printf("input a string: ");
fgets(a,sizeof(a),stdin);
int l=0;
for (int i = 0; a[i]!='\0'; i++)
        l++;

int hasDigits=0;
for (int i = 0; i < l; i++)
{
 if(a[i]>='0' && a[i]<='9')
 {
    hasDigits=1;
    break;
 }
}
if(hasDigits)
printf("Invalid String");
else{
    for (int j = 0; j < l/2; j++)
        {
            char t= a[j];
            a[j]= a[l-j-1];
            a[l-j-1]=t;
        }
        printf("Reversed string is:  %s",a);

}

return 0;
}