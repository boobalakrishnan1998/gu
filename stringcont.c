#include <stdio.h>
#include<string.h>

int main()
{    int i;
     char s1[99],c[99];
     char s2[99];
     gets(s1);
     gets(s2);
     int  k=strlen(s2);
       for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
       {
           if(s1[i]==s2[i])
           {
               k--;
           }
           else
             {
             printf("%d",k);
    return 0;    
             }
       }  
printf("%d",k);
    return 0;
}
