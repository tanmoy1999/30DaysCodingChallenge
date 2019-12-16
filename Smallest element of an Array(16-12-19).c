/*#include<stdio.h>
int main()
{
    int a[]={2,1,6,3};
    int i,j,k,small;
    small=a[0];
    for(i=1;i<=5;i++)
    {
        if(small>a[i])
        {
            small=a[i];
            printf("%d a[%d]=%d\n",small,i,a[i]);
        }
    }
    printf("%d\n",small);
    return 0;
}*/

//User input smallest number
#include<stdio.h>
int main()
{
    int a[6];
    int i,j,k,small;
    printf("Enter 6 nums: ");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=1;i<=5;i++)
    {
        if(small>a[i])
        {
            small=a[i];
            printf("%d a[%d]=%d\n",small,i,a[i]);
        }
    }
    printf("%d\n",small);
    return 0;
}
//Repeat on array

