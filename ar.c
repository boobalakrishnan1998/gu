#include <stdio.h>
int main()
{
    int n,i,m=0,c=0,k;
    int a[4];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } k=1;
   while(k!=5){
   
   for(i=0;i<k;i++)
   {
       m=m+a[i];
   }
   
   for(i=k+1;i<n;i++)
   {
       c=c+a[i];
   }
     
   if(c==m)
   {
       printf("Yes");
       return 0;
   }
 k++;
 m=0;
 c=0;
}
printf("NO");
    return 0;
}
