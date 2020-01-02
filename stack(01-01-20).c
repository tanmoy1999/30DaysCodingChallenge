#include<stdio.h>
int top=-1;
int a[10];
void push(int x)
{
    top++;
    a[top]=x;
}
void Print()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",a[i]);

    }
}
void pop()
{
    top--;
}

/*int main()
{
    int n,i,j,k;
    printf("No. of numbers you wanted to enter: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("Enter a num: ");
        scanf("%d",&n);
        push(n);
    }
    Print();
    return 0;


}*/

int main()
{
    push(10);
    push(13);
    push(20);
    push(20);
    pop();
    Print();

}

