#include <stdio.h>
#include<string.h>

int main()
{    int i;
     char s1[99],c[99];
     char s2[99];
     gets(s1);
     gets(s2);
       
       for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
       {
           if(s1[i]==s2[i])
           {
               c[i]=s1[i];
           }
           else
            {
            for(i=0;c[i]!='\0';i++)
            {
            printf("%c",c[i]);
            }
            return 0;
    }   }

    return 0;
}
