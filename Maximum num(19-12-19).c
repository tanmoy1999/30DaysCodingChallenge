#include<stdio.h>
int main()
{
    int a[]={323,123,523,523,823,5653};
    //0 6
    int j,max=0,n,k,i;
    for(i=0;i<6;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("max: %d",max);
    return 0;
}
