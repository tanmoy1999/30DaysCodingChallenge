// searching num in given array

#include<stdio.h>
int main()
{
    int a[10],n,i,j,k,find;
    printf("Enter number of nos. you wanted to enter: ");
    scanf("%d",&n);
    printf("Enter %d nos.: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Number you want to find: ");
    scanf("%d",&find);
    for(i=0;i<n;i++)
    {
        if(find==a[i])
        {
            printf("found position %d\n",i);
        }
    }

    /*for(i=0;i<n;i++)
    {
        printf("entered number are %d\n",a[i]);
    }*/
    return 0;

}
