//inserting number in array without shifting

#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int b,n,i,j,k;
    printf("Enter the position: ");
    scanf("%d",&n);     //1
    printf("Enter the number: ");
    scanf("%d",&k);
    a[n]=k;         //a[1]=0
    for(i=0;i<=5;i++)
    {
        printf("%d ",a[i]);

    }
    /*for(i=0;i<=5;i++)
    {
        //a[i+1]=a[i];
        printf("%d ",a[i]);
    }
    return 0;


}













