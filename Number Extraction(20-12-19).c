// ARMSTRONG NUMBER OF 3 DIGITS
/*#include<stdio.h>
int main()
{
    int n,i,j,r,a,c=0,sum=0,n1;
    printf("Enter a 3 digit number: ");
    scanf("%d",&n);
    n1=n;

    //printf("%d",a);
    while(n!=0)
    {
        r=n%10;

        sum=(r*r*r)+sum;
        n=n/10;
        //printf("r=%d n=%d\n",r,n);
        //c++;
    }
    printf("no. of digits: %d\n",sum);
    if(sum==n1)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
    return 0;
}*/

// N DIGITS ARMSTRONG NO.

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,r,a,c=0,sum=0,n1,power,n2;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    n2=n1;
    //printf("%d",a);
    while(n2!=0)
    {
        r=n2%10;
        n2=n2/10;
        c++;
    }
    printf("Number of digit is %d\n",c);
    while(n!=0)
    {
        r=n%10;
        sum=pow(r,c)+sum;
        n=n/10;
        //printf("r=%d n=%d\n",r,n);
        //c++;
    }
    printf("no. of digits: %d\n",sum);
    if(sum==n1)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
    return 0;
}

//

