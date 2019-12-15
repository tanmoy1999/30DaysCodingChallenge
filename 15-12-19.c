//Matching Values of Arrays

/*#include<stdio.h>
int main()
{
    int userValue[5],Check[5],i,count=0,j,n;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&userValue[i]);
    }
    printf("Enter the number again: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&Check[i]);
    }
    printf("**********check***********\n");
    for(i=0;i<5;i++)
    {
        if(userValue[i]!=Check[i])
        {
            count++;
        }
        else
        {
            printf("%d Value matched\n",i);
        }
    }
    printf("\n\n");
    printf("%d not matched\n",count);
    return 0;
}*/

//matching values of series

#include<stdio.h>
int main()
{
    int a[5],b[5],i,n,j;
    printf("Enter 5 numbers: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        b[i]=i*2;
        printf("%d\n",b[i]);
    }
    for(i=0;i<5;i++)
    {
        if(b[i]!=a[i])
        {
            printf("%d is not same\n",i);
        }
        else
        {
            printf("%d value matched\n",i);
        }
    }
    return 0;
}
