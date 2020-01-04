#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,n,i,j,a[10],choice;

void enqueue(int n)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=n;
    }
    else
    {
        rear++;
        a[rear]=n;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        front++;
    }
}

void display()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }

}
/*void emptyQueue()
{
    if(front==-1 && rear==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}*/


int main()
{
    while(1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter a num: \n");
            scanf("%d",&n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;


}
