
#include<stdio.h>
int main()
{
    int b,a,n,j,k,option,sum;
    while(1)
    {
        printf("Enter Option\n");
        printf("1. ADD\n2.MULTI\n3. EXIT\n");
        scanf("%d",&option);
        printf("Enter Two Number: ");
        scanf("%d%d",&a,&b);
        switch(option)
        {
        case 1:
            sum=add(a,b);
            printf("RESULT: %d\n",sum);
            break;
        case 2:
            sum=sub(a,b);
            printf("RESULT: %d\n",sum);
            break;
        case 3:
            exit(0);
        default:
            printf("Wrong Option\n");
        }
    }
    return 0;
}

int add(int i,int j)
{
    int s;
    s=i+j;
    return s;
}
int sub(int i,int j)
{
    int s;
    s=i*j;
    return s;
}
