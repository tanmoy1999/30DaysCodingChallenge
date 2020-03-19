#include<stdio.h>

int main()
{
   int a[]={5,2,4,6,8,5},i,j,k,count=0;
   scanf("%d",&k);
   for(i=0;i<6;i++)
   {
       for(j=i+1;j<=6;j++)
       {
           if(a[i]+a[j]==k)
           {
               printf("%d + %d\n",a[i],a[j]);
               count++;
               break;
           }
       }
   }
   printf("Possiblities: %d",count);
   return 0;
}
