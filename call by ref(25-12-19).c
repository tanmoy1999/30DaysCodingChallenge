#include<stdio.h>
int main()
{
    int a,n1=2,n2,i,j;
    printf("before Enter n1: %d\n",n1);
    n2=change(&n1);
    printf("after n1: %d",n2);
    return 0;
}
int change(int *i)
{
    int n2=0;
    printf("*before:%d\n",n2);
    n2=*i+100;
    printf("*after:%d\n",n2);
    return n2;
}

/*before Enter n1: 2
*before:0
*after:102
after n1: 102
Process returned 0 (0x0)   execution time : 0.307 s
Press any key to continue.*/


/*#include<stdio.h>
int main()
{
    int a,n1=2,n2,i,j;
    printf("before Enter n1: %d\n",n1);
    n2=change(n1);
    printf("after n1: %d",n2);
    return 0;
}
int change(int i)
{
    int n2=0;
    printf("*before:%d\n",n2);
    n2=i+100;
    printf("*after:%d\n",n2);
    return n2;
}*/

/*before Enter n1: 2
*before:0
*after:102
after n1: 102
Process returned 0 (0x0)   execution time : 0.195 s
Press any key to continue.*/
