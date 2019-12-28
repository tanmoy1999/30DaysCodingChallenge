#include<stdio.h>
int main()
{

    while(1)
    {
        int n,i,j,k;
        long int sum=1;
        printf("\nEnter a no.: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum=sum*i;
        }
        printf("factorial is: %d",sum);
    }

    return 0;
}
