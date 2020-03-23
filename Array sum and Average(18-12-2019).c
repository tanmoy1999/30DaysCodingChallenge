#include<stdio.h>
int main()
{
    int a[100],n,k,i,j,sum=0,avg=0;
    printf("Enter Num of nos (less than 100 nos): ");
    scanf("%d",&n);
    printf("Enter nos: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum: %d\n",sum);
    avg=sum/n;
    printf("Average: %d",avg);
    return 0;
}
