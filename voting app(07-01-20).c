#include<stdio.h>
int vote(int b);
int main()
{
    int tmc,bjp,cong,n,age,b,c,i,s,result,y,stop;
    printf("Enter your age: \n");
    scanf("%d",&age);
    do{
        if(age>18)
        {
            printf("party you want to vote: \n 1: TMC \n2: BJP \n3: Cong \n");
            scanf("%c",&b);
            vote(b);

        }
        else
        {
            printf("vote after %d year(s) \n",18-age);
        }


    }while(stop);

}

    int vote(int b)
    {
        int tmc,bjp,cong;
        if(b==1)
        {
            tmc++;
        }
        if(b==2)
        {
            bjp++;
        }
        if(b==3)
        {
            cong++;
        }
        if(b==3456)
        {
            printf("results: \n 1: TMC: %d \n2: BJP: %d \n3: Cong: %d ",tmc,bjp,cong);
        }
    }

