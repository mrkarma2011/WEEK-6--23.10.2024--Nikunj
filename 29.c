#include<stdio.h>
#include<string.h>
int main(){
char a[100]={'\0'}, b[100]={'\0'};
printf("Input string 1 : ");
fgets(a,sizeof(a), stdin);
printf("Input string 2 : ");
fgets(b,sizeof(b), stdin);

a[strcspn(a, "\n")] = 0;
b[strcspn(b, "\n")] = 0;
int t1[100]={0}, t2[100]={0},count1=0,count2=0,l1=0,l2=0,i=0,j=0;
l1 = strlen(a) ;  l2 = strlen(b) ;
if(l1!=l2)
printf("False");
else{


for (i = 0; i<l1 ; i++)
       { t1[a[i] - 'a']++;
        t2[b[i] - 'a']++;}

               
                int isEqual=1;
                for ( i = 0; i < 26; i++)
                {
                    if(t1[i]!=t2[i]){
                        isEqual=0;
                        break;
                    }
                }
            
if (!isEqual)
printf("Not angram");
else
printf("Angram");

}
    return 0;
}