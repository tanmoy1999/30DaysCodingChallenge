//addition of two num using function

#include<stdio.h>
int main()
{
    int a,b,i,j,sum;
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("sum is %d\n",sum);

}
int add(int i,int j)
{
    int s=0;
    s=i+j;
    return s;
}
