#include<stdio.h>
int main()
{
    int i,j,k,n,g,temp=0;
    int a[]={121,25,24,35,12,64};
   // printf("a: %d b: %d\n",a[0],a[1]);
    for(i=0;i<=5;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
    }
    for(i=0;i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            if(a[i]<a[j])
            {
                printf("\n\nB a[%d]: %d a[%d]: %d\n",i,a[i],j,a[j]);
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                printf("A a[%d]: %d a[%d]: %d\n",i,a[i],j,a[j]);
            }
        }
    }
    //printf("a: %d b: %d",a[0],a[1]);
    for(i=0;i<=5;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
    }
    return 0;
}
