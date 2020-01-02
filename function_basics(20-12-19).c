//addition of two num using function

/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
int main()
{
    int a,b,i,j,sum;
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);
    printf("a: %d b: %d\n",a,b);
    swap(&a,&b);
    printf("a: %d b: %d\n",a,b);
    return 0;

}
void swap(int *a,int *b)
{
    int s=0;
    s=*a;
    *a=*b;
    *b=s;
}*/

#include<stdio.h>
int main()
{
    int a[]={1,2};
    swap(&a[0],&a[1]);
    printf("a: %d b: %d\n",a[0],a[1]);
    return 0;

}
void swap(int *a[0],int *a[1])
{
    int s=0;
    s=*a[0];
    *a[0]=*a[1];
    *a[1]=s;
}
