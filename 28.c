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

        
        for (i = 0; i <  26; i++)
        for (j = 0; j<25-i; j++) 
            if(t1[j]> t1[j+1])
            {
                int t= t1[j];
                t1[j]= t1[j+1];
                t1[j+1]=t;
            }

        for (i = 0; i <  26; i++)
        for (j = 0; j<25-i; j++) 
            if(t2[j]> t2[j+1])
            {
                int t= t2[j];
                t2[j]= t2[j+1];
                t2[j+1]=t;
            }
               
                int isEqual=1;
                for ( i = 0; i < 26; i++)
                {
                    if(t1[i]!=t2[i]){
                        isEqual=0;
                        break;
                    }
                }
            
if (!isEqual)
printf("False");
else
printf("True");

}
    return 0;
}