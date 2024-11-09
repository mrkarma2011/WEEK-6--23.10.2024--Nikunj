#include<stdio.h>
int main(){
char a[1000]={'\0'};
printf("input a string: ");
fgets(a,sizeof(a),stdin);

    int alpha[26]={0};
for (int i = 0; a[i]!='\0'; i++)
{
    if (a[i] >= 'a' && a[i] <= 'z')
    {
        alpha[a[i] - 'a']++;
    }
    
}
int isPresent=1;
for (int i = 0; i < 26 ; i++)
{
    if(alpha[i]==0){
        isPresent=0;
        break;
    }

}
 if(!isPresent)
 printf("Not a pangram");
 else
 printf("Pangram");



    return 0;
}