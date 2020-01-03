#include<stdio.h>
#include<stdlib.h>
#define l 3
int a[10],top=-1,n,i,j,x;

void push(int x)
{
    top++;
    a[top]=x;
}
void pop()
{
    top--;
}
void PrinT()
{
    if(top!=-1)
    {
        printf("nos are: \n");
        for(i=0;i<=top;i++)
        {

            printf("%d ",a[i]);
        }
        printf("\n");
    }
    else{
        printf("NO Items\n");
    }

}



int main()
{
    while(1)
    {

        printf("1.Push\n2.Pop\n3.Print\n4.Exit\n");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
                printf("Enter a num: \n");
                scanf("%d",&x);
                push(x);
                break;
           case 2:
                pop();
                break;
           case 3:
                PrinT();
                break;
           case 4:
                exit(0);
        }
    }
   return 0;
}
