#include<stdio.h>
int main(){
char a[100]={'\0'}, b[100]={'\0'};
printf("input a string: ");
fgets(a, sizeof(a),stdin);
int bCount=0;
for(int i=0; a[i]!='\0';i++){
    int notSpace=1;
    if(a[i]==' ')
    {
    notSpace=0;
    }
    if(notSpace)
    b[bCount++]= a[i];
}
printf("Output: %s", b);

    return 0;
}