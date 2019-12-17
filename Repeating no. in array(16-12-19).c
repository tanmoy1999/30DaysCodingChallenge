#include<stdio.h>
int main()
{
    int a[]={4,5,2,5,4,2,5,2,4,1,2,5};
    int i,j,n,k,c=0;
    for(i=0;i<=11;i++)
    {
        for(j=i;j<=11;j++)
        {
            if(a[i]==a[j+1])
            {
                c++;
            }
        }
        printf("%d is %d times\n",a[i],c);
        c=0;
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int a[]={1,5,2,5,5,2};
    int n=0,i,j,c=0;
    for(i=0;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            if(a[i]==a[j+1])
            {
                c++;
                printf("%d\n",a[i]);

            }
        }
    }

    return 0;
}*/

//finding user input repeated numbers

/*#include<stdio.h>
int main()
{
    int a[]={1,5,2,5,5,2,5,12,52,62,43,12,65,12};
    int n=0,i,j,c=0;
    printf("Find: ");
    scanf("%d",&n);
    for(i=0;i<=13;i++)
    {
        if(n==a[i])
        {
            c++;

        }
    }
    printf("no. %d is %d times\n",n,c);

    return 0;
}*/




