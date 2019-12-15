
//Rotate array


/*#include<stdio.h>
int main()
{
    int a[]={7,8,9,10,11,12,13,14};
    int i,b,j,n,c=0,k=0;
    printf("Enter the shift: ");
    scanf("%d",&n);
    k=n-1;
    for(i=0;i<=(8/2)+1;i++)
    {
        printf("a[%d]=%d\n",i+n,a[i+n]);        //2 2 3 3 4 4
        c++;
    }
    for(i=0;i<=k;i++)           //1 2 3
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("%d",c/2);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int i,b,j,n,c=0,k=0;
    printf("Enter the shift: ");
    scanf("%d",&n);
    k=n-1;
    for(i=0;i<=(5/2);i++)
    {
        printf("a[%d]=%d\n",i+n,a[i+n]);        //2 2 3 3 4 4
        c++;
    }
    for(i=0;i<=k;i++)           //1 2 3
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("%d",c/2);
    return 0;
}

