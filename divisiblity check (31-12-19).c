#include<stdio.h>
int main()
{
    int num,div=0,i,j,k,l;
    printf("Enter a no. for divisiblity check: ");
    scanf("%d",&num);
    //printf("Range from 1 to ");
    //scanf("%d",&k);
    for(i=1;i<=num;i++)
    {
        div=num%i;
        if(div==0)
        {
            printf("The no. is divisible by %d\n",i);
        }
    }
    return 0;
}
